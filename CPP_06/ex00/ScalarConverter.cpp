#include "ScalarConverter.hpp"
#include <string.h>

ScalarConverter::ScalarConverter() {
    cout << "consructor called "<< endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
    *this = obj;
    cout << "copy constructor called " << endl;
}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &obj)
{
    if (this != &obj)
    {
        *this = obj;
    }
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    cout << "destructor called " << endl;
}

void ScalarConverter::convert(const string &arg)
{
    string tmp = arg;
    if (!isalpha(tmp[0]))
        number = atoi(arg.c_str());
    convertToCharacter(arg);
    convertToInt(arg);
    convertTofloat(arg);
    convertToDouble(arg);
}

const string ScalarConverter::toUpper(const string &str)
{
    string tmp = str;
    for (long unsigned int i = 0; i < str.size(); i++)
        tmp[i] = toupper(tmp[i]);
    return tmp;
} 

bool ScalarConverter::isNan(const string &arg)
{
    if (arg == "-inff" || arg == "+inff" || arg == "nanf")
        return (true);
    if (arg == "-inf" || arg == "+inf" || arg == "nan")
        return (true);

    return !strcmp((toUpper(arg)).c_str(), "NAN");
}

void ScalarConverter::convertToCharacter(const string &arg)
{
    try {
        if (isNan(arg))
            cout << "char: impossible" << endl;
        else if (number < 32 || number == 127)
            throw std::runtime_error("char: Non displayable");
        else
            cout << "char: '" << static_cast<char>(number) << "'"<< endl;
    }
    catch (std::runtime_error &e){
        std::cerr << e.what() << endl; 
    }
}

void ScalarConverter::convertToInt(const string &arg)
{
        if (isNan(arg))
            cout << "int: impossible" << endl;
        else
            cout << "int: " << number << endl;
}

void ScalarConverter::convertTofloat(const string &arg)
{  
    if (isNan(arg)){
        cout << "float: nanf" << endl;
        return ;
    }
    
    float nbr = atof(arg.c_str());
    if (nbr == number)
        cout << "float: " << number << ".0f"<< endl;
    else
        cout << "float: " << nbr << "f"<< endl;
}

void ScalarConverter::convertToDouble(const string &arg)
{
    if (isNan(arg)){
        cout << "double: nan" << endl;
        return ;
    }

    //double nbr = static_cast<double> (number);
    double nbr = atof(arg.c_str());
    cout << endl  << nbr <<endl << endl;
    if (nbr == number)
        cout << "double : " << number << ".0" << endl;
    else
        cout << "double: " << nbr << endl;

}