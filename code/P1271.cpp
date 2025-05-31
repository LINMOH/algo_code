#include <iostream>
#include <cmath>
using namespace std;

int a[1005];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        a[b]++;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= a[i]; j++) {
            cout << i << ' ';
        }
    }

    return 0;
}
