// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

std::vector<std::string> split(const std::string& str, char sep) {
  std::vector<std::string> arr;
  arr.push_back(str);
  if ((arr[0] == " ") || (arr[0] == "")) {
    arr.erase(arr.begin());
    return arr;
  }
  size_t prev = 0;
  size_t next = 0;
  while ((next = str.find(sep, prev)) != std::string::npos) {
    std::string tmp = str.substr(prev, next - prev);
    arr.push_back(tmp);
    prev = next + 1;
  }
  std::string tmp = str.substr(prev);
  arr.push_back(str.substr(prev));
  arr.erase(arr.begin());
  return arr;
}
