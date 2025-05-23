// i tried to use trailing return types here as a little test to see if they suit me
#pragma once
#include <vector>

class elon_sort{
public:
    elon_sort();
    ~elon_sort() = default;

    auto sort(std::vector<int>& dataarray) -> void;
    auto sort(std::vector<double>& dataarray) -> void;
};