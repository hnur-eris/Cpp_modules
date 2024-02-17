#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

    public :
        MutantStack() {}
        MutantStack(const MutantStack &obj){
            *this = obj;
        }
        MutantStack &operator = (const MutantStack &obj) {
            return *this;
        }
        ~MutantStack() {}

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin(){
            return this->c.begin();
        }
        const_iterator begin() const {
            return this->c.begin();
        }

        reverse_iterator rbegin() {
            return this->c.rbegin();
        }
        const_reverse_iterator rbegin() const {
            return this->c.rbegin();
        }

        iterator end(){
            return this->c.end();
        }

};