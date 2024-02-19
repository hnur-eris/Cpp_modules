#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

    public :
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &obj) : std::stack<T>(obj){
            *this = obj;
        }
        MutantStack &operator = (const MutantStack &obj) {
            std::stack<T>::operator=(obj);
            return *this;
        }
        ~MutantStack() {}

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(){
            return this->c.begin();
        }

        iterator end(){
            return this->c.end();
        }

};
