#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <iostream>
using namespace std;

class FileManager {
public:
    static string readFile(string filename);
    static void writeFile(string filename, string content);
};

#endif
