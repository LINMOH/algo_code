#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long a[10005];

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                cnt++;
            }
        }
    }
    /*
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    */
    cout << cnt;
}
