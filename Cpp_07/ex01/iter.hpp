#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template <typename T>
void iter(T *arr, unsigned long lenght, void (*fun)(T));