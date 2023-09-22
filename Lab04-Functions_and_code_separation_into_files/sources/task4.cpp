// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

void sort(std::vector<float>& numbers) {
  for (int i = 0; i < static_cast<int>(numbers.size()); i++) {
    for (int j = i; j < static_cast<int>(numbers.size()); j++) {
      if (numbers[i] > numbers[j]) std::swap(numbers[i], numbers[j]);
    }
  }
}
