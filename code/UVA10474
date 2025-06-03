#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int a[10010];

int n, q;
int k = 1;

int main() {
    while (cin >> n >> q && (n != 0 && q != 0)) {
        cout << "CASE# " << k++ << ':' << endl;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort (a, a + n);

        for (int i = 0; i < q; i++) {
            int fd;
            bool fnd = 0;
            cin >> fd;
            for (int i = 0; i < n; i++) {
                if (a[i] == fd) {
                    cout << fd << " found at " << i + 1 << endl;
                    fnd = 1;
                    break;
                }
            }
            if (!fnd) {
                cout << fd << " not found" << endl;
            }
        }
    }
    return 0;
}
