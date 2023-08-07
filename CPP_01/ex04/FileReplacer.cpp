#include "FileReplacer.h"

FileReplacer::FileReplacer(const string &filename, const string &s1, const string &s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

void FileReplacer::replaceOccurrences()
{
    ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        cout << "Failed to open input file:  " << filename << endl;
        return ;
    }
    string outputFileName = filename.append(".replace");
    ofstream outputFile(outputFileName.c_str());
    if (!outputFile)
    {
        cout << "Failed to create output file:  " << outputFileName << endl;
        return ;
    }

    string line;
    while (getline(inputFile, line))
    {
        Replace(line);
        outputFile << line << endl;
    }
    inputFile.close();
    outputFile.close();

    cout << "File copied and replaced successfully" << endl;
}

void FileReplacer::Replace(string &line)
{
    size_t pos = line.find(s1);
    while (pos < line.length() && !line.empty())
    {
        line = line.substr(0, pos) + s2 + line.substr(pos +s1.length());
        pos = line.find(s1, pos +s2.length());
    }
}
