//
// Created by apynu on 5/17/25.
//
#include "elon_sort.h"
#include <iostream>

int main() {
  std::vector<int> data = {0, 12, 42, 58, 2084, 1284, 97};

  elon_sort::sort(data);

  for (int element : data) {
    printf("%d, ", element);
  }

  printf("not implemented");
  return 1;
}
