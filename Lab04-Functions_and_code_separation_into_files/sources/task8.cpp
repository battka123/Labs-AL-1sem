// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

std::string join(const std::vector<std::string>& vec, const std::string& sep) {
  std::string res = "";

  for (std::string st : vec) {
    if (st != vec[vec.size() - 1]) {
      res += st + sep;
    } else {
      res += st;
    }
  }
  return res;
}
