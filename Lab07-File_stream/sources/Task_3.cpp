// Copyright 2022 Ivan Sushin i.suschin@yandex.ru

#include "header.hpp"

// first part
void saveToFile(const std::string& filename, const Groups& groups) {
  std::ofstream file;
  file.open(filename, std::fstream::out);
  if (file.is_open()) {
    for (auto const& group : groups) {
      file << group.first << std::endl;
      for (auto const& student : group.second) {
        file << student.Name << ' ';
        file << student.Year << ' ';
        for (auto const& score : student.RecordBook) {
          file << score.first << ' ' << score.second << ' ';
        }
        file << std::endl;
      }
    }
    file << "abracadabra";  // Это строчка служит для того, чтобы записать
                            // непервый Groups
    // первая строка - группа; вторая и тд - имя, год, сторка+очки
  }
  file.close();
}

// second part
void loadFromFile(const std::string& filename, Groups& outGroups) {
  std::string line;   // для строки
  std::string group;  // для группы, которая является ключом для вншней мапы
  std::vector<Student>
      students;  // для создания вектора, который есть значение внешней мапы
  std::map<std::string, std::vector<Student>> Group;
  Student struct_buffer;

  std::ifstream file;
  file.open(filename, std::ifstream::in);
  if (file.is_open() && file.peek() != EOF) {
    while (std::getline(file, line)) {
      if (std::count(line.begin(), line.end(), ' ') != 0) {
        std::vector<std::string> arr;
        size_t prev = 0;
        size_t next;

        while ((next = line.find(' ', prev)) !=
               std::string::npos) {  // Добавляю подстроки в вектор
          std::string tmp = line.substr(prev, next - prev);
          arr.push_back(tmp);
          prev = next + 1;
        }
        std::map<std::string, Score>
            Book;  // Добавляем ключ и значение из вектора во внутреннюю мапу
        for (std::size_t el = 2; el != arr.size(); el += 2) {
          Book.insert({arr[el], Score(std::stoi(arr[el + 1]))});
        }
        struct_buffer.Name = arr[0];
        struct_buffer.Year = std::stoi(arr[1]);
        struct_buffer.RecordBook = Book;
        students.push_back(struct_buffer);
        arr.clear();
        struct_buffer = {};
      } else {
        if (!students.empty()) {
          outGroups.insert({group, students});
          students.clear();
        }
        group = line;
      }
    }
  } else {
    outGroups = {};
  }
  file.close();
}
