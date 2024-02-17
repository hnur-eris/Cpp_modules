#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(int n) : size(n) {}

Span::Span(const Span &obj) {
    *this = obj;
}

Span &Span::operator = (const Span &obj) {
    if (this != &obj)
    {
        size = obj.getSize();
        list = obj.getList();
    }
    return *this;
}

Span::~Span() {}

unsigned int Span::getSize() const {
    return size;
}

vector<int> Span::getList() const {
    return list;
}

void Span::addNumber(int number) {
    if (list.size() == size)
        throw std::runtime_error( "the capasity is full" );
    
    list.push_back(number);
}

int Span::shortestSpan() {
    if (list.size() <= 1)
        throw std::runtime_error("List does not have enough number to compare");
    
    std::sort(list.begin(), list.end());
    int min = std::numeric_limits<int>::max();
    
    for (int i = 1; i < list.size(); i++) {
        int span = std::abs(list[i] - list[i - 1]);
        
        min = std::min(min, span);
    
    }
    
    return min;   
}

int Span::longestSpan() {

    if (list.size() <= 1)
        throw std::runtime_error("List does not have enough number to compare");
    
    std::sort(list.begin(), list.end());

    int max = std::abs(list[list.size() - 1] - list[0]);
    return max;
}

void Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int repeatValue) {

    int numToAdd = std::distance(begin, end);
    if (list.size() + numToAdd > size)
        throw std::runtime_error("there is not as much space in my list as the element I want to add");

    for (int i = 0; i < numToAdd && size < list.size(); i++){
        this->addNumber(repeatValue);
    }
}