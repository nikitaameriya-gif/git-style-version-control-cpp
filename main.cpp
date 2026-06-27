#include "Repository.h"

int main() {

    Repository repo;

    string filename = "file.txt";
    repo.init(filename);

    int choice, id;
    string message;

    do {
        cout << "\n===== MINI GIT SYSTEM =====\n";
        cout << "1. Commit\n";
        cout << "2. View History (log)\n";
        cout << "3. Checkout Version\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter commit message: ";
                cin.ignore();
                getline(cin, message);

                repo.commit(message, filename);
                break;

            case 2:
                repo.log();
                break;

            case 3:
                cout << "Enter commit ID: ";
                cin >> id;
                repo.checkout(id);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
