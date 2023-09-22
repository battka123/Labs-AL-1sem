// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

using std::size_t;
using std::string;
std::string replace(const std::string& str, const std::string& old,
                    const std::string& new_string) {
  string str_2 = str;
  size_t find_err = 100;
  while (str_2.find(old) < find_err) {
    size_t buffer = str_2.find(old);
    str_2.erase(str_2.cbegin() + str_2.find(old),
                  str_2.cbegin() + str_2.find(old) + old.size());
    str_2.insert(buffer, new_string);
  }
  return str_2;
}
