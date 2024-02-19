#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Span {

    private :
        unsigned int size;
        vector<int> list;
    public :

        Span();
        Span(int n);
        Span(const Span &obj);
        Span &operator = (const Span &obj);
        ~Span();

        unsigned int getSize() const;
        vector<int> getList() const;
        void addNumber(int number);
        void addNumber();
        int shortestSpan();
        int longestSpan();

};
