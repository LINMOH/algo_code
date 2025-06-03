#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long a = 0, b = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == j) {
                a += (n - i + 1) * (m - j + 1);
            } else {
                b += (n - i + 1) * (m - j + 1);
            }
        }
    }
    cout << a << ' ' << b;
}
