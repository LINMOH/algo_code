#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
int cnt = 1;

int main() {
    while (cin >> n && n != 0) {
        int line1[n], line2[n];

        for (int i = 0; i < n; i++) {
            cin >> line1[i];
        }

        cout << "Game " << cnt << ":" << endl;

        while (1) {
            bool u1[n] = {0};
            bool u2[n] = {0};

            for (int i = 0; i < n; i++) {
                cin >> line2[i];
            }

            int brk = 1;

            for (int i = 0; i < n; i++) {
                if (line2[i] != 0) {
                    brk = 0;
                    break;
                }
            }

            if (brk == 1) {
                break;
            }

            int a = 0, b = 0;
            for (int i = 0; i < n; i++) {
                if (line1[i] == line2[i] && u1[i] != 1 && u2[i] != 1) {
                    a++;
                    u1[i] = 1;
                    u2[i] = 1;
                }
            }

            for (int i = 0; i < n; i++) {
                if (u1[i]) continue;
                for (int j = 0; j < n; j++) {
                    if (line1[i] == line2[j] && u1[i] != 1 && u2[j] != 1) {
                        b++;
                        u1[i] = 1;
                        u2[j] = 1;
                        break;
                    }
                }
            }
            cout << "    " << '(' << a << ',' << b << ')' << endl;
        }
        cnt++;
    }
    return 0;
}
