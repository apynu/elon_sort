//
// Created by apynu on 5/17/25.
//
#include "elon_sort.h"
#include <iostream>

int main()
{
    std::vector<int> _v_data = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int _init_size = _v_data.size();

    for (int i = 0; i <= 100000; ++i)
    {
        elon_sort::sort(_v_data);
    }

    for (int element : _v_data)
    {
        printf("%d, ", element);
    }

    if (_v_data.size() != _init_size)
    {
        return 1;
    }

    return 0;
}
