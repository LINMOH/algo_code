#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
    char a;
    bool y = 1;
    while (cin.get(a)) {
        if (a == '"') {
            if (y == 1) {
                cout << '`' << '`';
                y = 0;
            } else if (y == 0) {
                cout << '\'' << '\'';
                y = 1;
            }
        } else {
            cout << a;
        }
        
    }

    return 0;
}
