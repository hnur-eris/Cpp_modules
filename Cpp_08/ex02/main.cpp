#include "MutantStack.hpp"

int main()
{

    try {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::stack<int> s(mstack);

    }

    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }

    try {
        MutantStack<int> stack;
        stack.push(10);
        stack.push(20);
        stack.push(30);

        MutantStack<int> m(stack);

        MutantStack<int>::iterator i = m.begin();
        std::cout << "second idea is : " << std::endl;
        while (i != m.end())
            i++;
        i--;
        
        for (i; i != m.begin(); i--){
            std::cout << *i << std::endl;
        }
        std::cout << *i << std::endl;

    }

    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
