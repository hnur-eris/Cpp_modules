#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
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
        void addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int repeatValue);
        int shortestSpan();
        int longestSpan();

};