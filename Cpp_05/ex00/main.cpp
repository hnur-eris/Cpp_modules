#include "Bureaucrat.hpp"

int main() {
    
    try
    {
        Bureaucrat potter("harry", 3);
        cout << potter << endl;

        potter.incrementDegree();
        potter.decrementDegree();

        Bureaucrat person("mistery" , 250);
        cout << person << endl;
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << endl;
    }
    
}
