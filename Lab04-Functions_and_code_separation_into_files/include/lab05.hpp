// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#ifndef INCLUDE_LAB05_HPP_
#define INCLUDE_LAB05_HPP_

#include <string>
#include <vector>
#include <utility>
#include <algorithm>

// Task_1
float mean(const std::vector<float>& mean);
// Task_2
std::pair<float, float> minMax(const std::vector<float>& vector);
// Task_3
int argmax(const std::vector<float>& numbers);
// Task_4
void sort(std::vector<float>& numbers);
// Task_5
bool remove_first_negative_element(std::vector<int>&, int& removed_element);
// Task_6
std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string);
// Task_7
std::vector<std::string> split(const std::string& str, char sep);
// Task_8
std::string join(const std::vector<std::string>&, const std::string& sep);
#endif  // INCLUDE_LAB05_HPP_
