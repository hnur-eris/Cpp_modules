#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat nur("nur", 9);
        Form form("wawa form", 15, 15);
        nur.signForm(form);
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << endl;
    }
    return 0;
}
