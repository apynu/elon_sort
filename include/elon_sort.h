// i tried to use trailing return types here as a little test to see if they
// suit me
#pragma once
#include <vector>

class elon_sort
{
  public:
    static auto sort(std::vector<int> &data_array) -> void;
};
