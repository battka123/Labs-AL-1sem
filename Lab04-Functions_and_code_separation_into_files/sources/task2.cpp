// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>
#include <limits>

std::pair<float, float> minMax(const std::vector<float>& vector) {
  float min = 16, max = -6;
  for (auto i : vector) {
    if (i < min) min = i;
    if (i > max) max = i;
  }
  if ((min == 16) && (max == -6)) {
    max = std::numeric_limits<float>::max();
    min = std::numeric_limits<float>::min();
  }
  std::pair<double, double> para(min, max);
  return para;
}
