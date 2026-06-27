#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <iostream>
#include <vector>
#include "Commit.h"
using namespace std;

class Repository {
private:
    vector<Commit> commits;
    int commitCounter;

public:
    Repository();

    void init(string filename);
    void commit(string message, string filename);
    void log();
    void checkout(int id);
};

#endif
