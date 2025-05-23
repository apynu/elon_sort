#include "../include/elon_sort.h"

#include <algorithm>
#include <iostream>
#include <random>

elon_sort::elon_sort(){
    printf("elon sort yay");
}

auto sort(std::vector<int>& dataarr) -> void {
    std::vector<int> tmparr;

    // make tmparr half the size of dataarr
    tmparr.resize(dataarr.size() / 2);

    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, tmparr.size()); // define the range

    // repeat step 1 and step 2 a random amount of time
    for (int i = 0; i < std::rand(); i++) {
        // step 1: transfer half of the elements in dataarr to tmparr
        for (std::vector<int>::const_iterator it; *it < dataarr.size() / 2; ++it) {
            // take a random number between 0 and dataarr.size();
            //int rnum = distr(gen);

            // erase num from dataarr and transfer it to tmparr;
            tmparr.at(*it) = dataarr.at(*it);
            dataarr.erase(it);
        }

        // step 2: transfer all elements back to the first array via a random index
        for (int k = 0; i < tmparr.size(); i++) {
            int rnum = distr(gen);
            dataarr.push_back(tmparr.at(rnum));
        }
    }

}

