// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

int argmax(const std::vector<float>& numbers) {
  float k = -1, max = -3, num;
  for (auto i : numbers) {
    k++;
    if (i > max) {
      max = i;
      num = k;
    }
  }
  if (static_cast<int>(numbers.size()) == 0) return static_cast<int>(k);
  return static_cast<int>(num);
}
