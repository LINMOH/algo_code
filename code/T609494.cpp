#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    string a;

    while (t--) {
        cin >> a;
        bool huiwen = 1;
        int cnt = 0;

        int lasti = a.length();
        for (int i = 0; i < lasti; i++) {
            for (int j = i; j < lasti; j++) {
                huiwen = 1;
                for (int l = i, r = j; l <= r; l++, r--) {
                    char c1 = a[l];
                    char c2 = a[r];
                    if (c1 != c2 && c1 != '?' && c2 != '?') {
                        huiwen = 0;
                    }
                }
                if (huiwen) {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
