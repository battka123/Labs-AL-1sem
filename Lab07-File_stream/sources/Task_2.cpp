// Copyright 2022 Ivan Sushin i.suschin@yandex.ru

#include "header.hpp"
// First_part
void saveToFile(const std::string& filename, const std::vector<Book>& data) {
  std::ofstream file;
  file.open(filename, std::fstream::out);
  if (file.is_open()) {
    for (const auto& i : data) {
      file << i.Author << '&' << i.Title << '&' << i.Year << '&';
    }
  }
  file.close();
}
// Second_part
void loadFromFile(const std::string& filename, std::vector<Book>& outData) {
  Book struct_buffer;
  std::string line;
  std::ifstream file;
  file.open(filename, std::ifstream::in);
  if (file.is_open()) {
    int k = 1;
    while (std::getline(file, line, '&')) {
      switch (k) {
        case 1:
          k++;
          struct_buffer.Author = line;
          break;
        case 2:
          k++;
          struct_buffer.Title = line;
          break;
        case 3:
          k = 1;
          struct_buffer.Year = std::stoi(line);
          outData.push_back(struct_buffer);
          break;
      }
    }
  }
  file.close();
}
