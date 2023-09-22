// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
#include "header.hpp"

//First_part
void saveToFile(const std::string& filename,
                const std::vector<std::string>& data) {
  std::ofstream fout;
  fout.open(filename, std::fstream::out);

  if (fout.is_open())
    for (auto& i : data) fout << i << std::endl;

  fout.close();
}
//Second_part
void loadFromFile(const std::string& filename,
                  std::vector<std::string>& outData) {
  std::string line;
  std::ifstream fin;
  fin.open(filename, std::fstream::in);

  if (fin.is_open())
    while (std::getline(fin, line)) outData.push_back(line);

  line = "";
  fin.close();
}
