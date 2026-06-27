#include "Commit.h"

Commit::Commit(int i, string m, string f, string c) {
    id = i;
    message = m;
    filename = f;
    content = c;
}
