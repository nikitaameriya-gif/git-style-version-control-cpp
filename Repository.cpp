#include "Repository.h"
#include "FileManager.h"

Repository::Repository() {
    commitCounter = 0;
}

void Repository::init(string filename) {
    cout << "Repository initialized for file: " << filename << endl;
}

void Repository::commit(string message, string filename) {
    commitCounter++;

    string content = FileManager::readFile(filename);

    Commit c(commitCounter, message, filename, content);
    commits.push_back(c);

    cout << "Committed: " << message << endl;
}

void Repository::log() {
    cout << "\n--- Commit History ---\n";

    for (auto &c : commits) {
        cout << "ID: " << c.id
             << " | Message: " << c.message << endl;
    }
}

void Repository::checkout(int id) {
    for (auto &c : commits) {
        if (c.id == id) {
            FileManager::writeFile(c.filename, c.content);
            cout << "Checked out commit ID: " << id << endl;
            return;
        }
    }

    cout << "Commit not found!\n";
}
