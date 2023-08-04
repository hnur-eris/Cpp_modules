#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat nur("nur", 159);
        cout << nur << endl;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << endl;
    }
    return 0;
}