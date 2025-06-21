#include "../include/elon_sort.h"

#include <cstdio>
#include <random>

using namespace std;

auto elon_sort::sort(vector<int> &data_arr) -> void {
  vector<int> tmp_arr;

  // make tmparr half the size of dataarr
  tmp_arr.resize(data_arr.size() / 2);

  random_device rd;  // obtain a random number from hardware
  mt19937 gen(rd()); // seed the generator
  uniform_int_distribution<> distr(0, tmp_arr.size()); // define the range

  // repeat step 1 and step 2 a random amount of time
  for (int i = 0; i < rand(); i++) {

    for (int element : data_arr) {
      tmp_arr.push_back(element);
    }

    // step 1: transfer half of the elements in dataarr to tmparr
    for (vector<int>::iterator it; *it < data_arr.size() / 2; ++it) {
      // take a random number between 0 and dataarr.size();
      // int rnum = distr(gen);

      // erase num from dataarr and transfer it to tmparr;
      tmp_arr.at(*it) = data_arr.at(*it);

      data_arr.erase(it);
    }

    // step 2: transfer all elements back to the first array via a random index
    for (int k = 0; i < tmp_arr.size(); i++) {
      int rnum = distr(gen);
      data_arr.push_back(tmp_arr.at(rnum));
    }
  }
}
