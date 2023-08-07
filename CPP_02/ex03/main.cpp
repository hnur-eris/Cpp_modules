#include "Point.hpp"

int main() {
    Point a(0.0, 0.0);
    Point b(5.0, 0.0);
    Point c(2.5, 5.0);

    Point point(1.0, 2.0);

    bool isInside = bsp(a, b, c, point);

    if (isInside) {
        cout << "The point is inside the triangle." << endl;
    }
    else {
        cout << "The point is outside the triangle." << endl;
    }

    return 0;
}
