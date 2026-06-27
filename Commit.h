#ifndef COMMIT_H
#define COMMIT_H

#include <iostream>
#include <string>
using namespace std;

class Commit {
public:
    int id;
    string message;
    string filename;
    string content;

    Commit(int i, string m, string f, string c);
};

#endif
