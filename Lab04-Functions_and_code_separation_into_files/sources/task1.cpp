// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

float mean(const std::vector<float>& mean) {
  float average = 0, k = 0;
  for (auto i : mean) {
    average += i;
    k++;
  }
  if (k != 0)
    return average / k;
  else
    return 0;
}
