#include "../include/elon_sort.h"
#include <random>

using namespace std;

auto elon_sort::sort(vector<int> &data_arr) -> void {

  int _half_data_arr_size = data_arr.size() / 2;

  random_device _rd;   // obtain a random number from hardware
  mt19937 _gen(_rd()); // seed the generator
  uniform_int_distribution<> _rand_tmp_arr_index(0,_half_data_arr_size - 1); // -1 to get index
  uniform_int_distribution<> _rand_alg_runtime(0, UINT8_MAX);

  // repeat step 1 and step 2 a random amount of time
  // ensure that the algorithm is at least run once
  int _elon_count = 0;
  do{
    vector<int> _tmp_arr = {};

    // step 1: transfer half of the elements in dataarr to tmparr
    for (int _k = 0; _k < _half_data_arr_size; ++_k) {
      _tmp_arr.push_back(data_arr.at(0));
      data_arr.erase(data_arr.begin());
    }

    // step 2: transfer all elements back to the first array via a random index
    for (int _k : _tmp_arr) {
      int _rand_index = _rand_tmp_arr_index(_gen);

      // ensure that _rand_index is valid
      while (_rand_index >= _tmp_arr.size()) {
        _rand_index--;
      }

      data_arr.push_back(_tmp_arr.at(_rand_index));
      _tmp_arr.erase(_tmp_arr.begin() + _rand_index);
    }

    _elon_count++;
  }while(_elon_count < _rand_alg_runtime(_gen));
}