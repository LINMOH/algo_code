#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string a = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main() {
    string b;

    while (getline(cin, b)) {
        for (int i = 0; i < int(b.length()); i++) {
            if (b[i] == ' ') {
                continue;
            }
            for (int j = 0; j < int(a.length()); j++) {
                if (a[j] == b[i]) {
                    b[i] = a[j - 1];
                    break;
                }
            }
        }
        cout << b << endl;
    }

    return 0;
}
