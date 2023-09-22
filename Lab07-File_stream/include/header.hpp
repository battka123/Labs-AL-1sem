// Copyright 2022 Ivan Sushin i.suschin@yandex.ru

#ifndef TEMPLATE_HEADER_HPP_
#define TEMPLATE_HEADER_HPP_

#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

// Task_1
void saveToFile(const std::string& filename,
                const std::vector<std::string>& data);
void loadFromFile(const std::string& filename,
                  std::vector<std::string>& outData);

// Task_2
struct Book {
  std::string Author;
  std::string Title;
  int Year;
};

void saveToFile(const std::string& filename, const std::vector<Book>& data);
void loadFromFile(const std::string& filename, std::vector<Book>& outData);

// Task_3
enum Score { Unsatisfactorily = 2, Satisfactorily, Good, Excellent };

struct Student {
  std::string Name;
  int Year;
  std::map<std::string, Score> RecordBook;
};
using Groups = std::map<std::string, std::vector<Student>>;

void saveToFile(const std::string& filename, const Groups& groups);
void loadFromFile(const std::string& filename, Groups& outGroups);
#endif  // TEMPLATE_HEADER_HPP_
