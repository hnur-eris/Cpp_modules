#ifndef FILEREPLACER_H
#define FILEREPLACER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;

class FileReplacer {
    private:
        string filename;
        string s1;
        string s2;

    public:
        FileReplacer(const string &filename, const string &s1, const string &s2);
        void replaceOccurrences();
        void Replace(string &line);

};

#endif