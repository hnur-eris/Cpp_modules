#pragma once 

#include <iostream>
#include <string>
#include <cstdlib> // stoi, stof, stod için gerekli başlık dosyası


using std::cout;
using std::endl;
using std::string;

class ScalarConverter {
    
    private:
        int number;
    public :
        ScalarConverter();
        ScalarConverter(ScalarConverter const &obj);
        ScalarConverter &operator = (const ScalarConverter &obj);
        ~ScalarConverter();
        
        void convert(const string &arg);
        
        const string toUpper(const string &str);

        void convertToCharacter(const string &arg);
        void convertToInt(const string &arg);
        void convertTofloat(const string &arg);
        void convertToDouble(const string &arg);
        bool isNan(const string &arg);
    
};