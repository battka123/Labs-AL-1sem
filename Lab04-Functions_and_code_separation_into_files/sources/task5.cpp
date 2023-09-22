// Copyright 2022 Ivan Sushin i.suschin@yandex.ru
//
//
#include <lab05.hpp>

bool remove_first_negative_element(std::vector<int>& vec,
                                   int& removed_element) {
  size_t k = 0;
  for (int i : vec) {
    k++;
    if (i < 0) {
      removed_element = i;
      for (; size_t(k - 1) < vec.size(); k++) {
        vec[k - 1] = vec[k];
      }
      vec.resize(static_cast<int>(vec.size()) - 1);
      return true;
    }
  }
  removed_element = 0;
  return false;
}
