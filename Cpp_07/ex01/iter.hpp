#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T, typename F>
void iter(T *arr, unsigned long lenght, F fun);
