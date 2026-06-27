#include "FileManager.h"
#include <fstream>

string FileManager::readFile(string filename) {
    ifstream file(filename);
    string line, content;

    while (getline(file, line)) {
        content += line + "\n";
    }

    return content;
}

void FileManager::writeFile(string filename, string content) {
    ofstream file(filename);
    file << content;
    file.close();
}
