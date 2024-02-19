#include "Span.hpp"

int main()
{
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        Span s = Span(7);
        std::cout << "the values contained in a single function call: " << std::endl; 
        s.addNumber();
        std::vector<int> list = s.getList();
        for (std::vector<int>::iterator i = list.begin(); i !=list.end(); ++i)
            std::cout << *i << std::endl;
        
    }

    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
