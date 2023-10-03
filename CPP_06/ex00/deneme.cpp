#include <iostream>
#include <sstream>
#include <limits>
#include <cmath>

class ScalarConverter {
public:
    static void convert(const std::string& input) {
        char charResult;
        int intResult;
        float floatResult;
        double doubleResult;

        std::istringstream stream(input);

        if (stream >> charResult) {
            // Convert to char
            if (isprint(charResult)) {
                std::cout << "char: '" << charResult << "'" << std::endl;
            } else {
                std::cout << "char: Non displayable" << std::endl;
            }
        } else if (stream.clear() && stream.seekg(0) && stream >> intResult) {
            // Convert to int
            std::cout << "int: " << intResult << std::endl;

            // Convert to float
            if (intResult >= std::numeric_limits<float>::min() &&
                intResult <= std::numeric_limits<float>::max()) {
                floatResult = static_cast<float>(intResult);
                std::cout << "float: " << floatResult << "f" << std::endl;
            } else {
                std::cout << "float: impossible" << std::endl;
            }

            // Convert to double
            doubleResult = static_cast<double>(intResult);
            std::cout << "double: " << doubleResult << std::endl;
        } else if (stream.clear() && stream.seekg(0) && stream >> floatResult) {
            // Convert to float
            std::cout << "float: " << floatResult << "f" << std::endl;

            // Convert to double
            doubleResult = static_cast<double>(floatResult);
            std::cout << "double: " << doubleResult << std::endl;
        } else if (stream.clear() && stream.seekg(0) && stream >> doubleResult) {
            // Convert to double
            std::cout << "double: " << doubleResult << std::endl;
        } else {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
        }
    }
};

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
        return 1;
    }

    std::string input(argv[1]);
    ScalarConverter::convert(input);

    return 0;
}
