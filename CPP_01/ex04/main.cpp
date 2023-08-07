#include "FileReplacer.h"

int main(int argc, char **argv) {
    if (argc != 4) {
        cout << "Usage: ./program <filename> <s1> <s2>\n";
        return 1;
    }

    FileReplacer fileReplacer(argv[1], argv[2], argv[3]);
    fileReplacer.replaceOccurrences();

    return 0;
}
