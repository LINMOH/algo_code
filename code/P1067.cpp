#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool first = true;

    for (int i = n; i >= 0; i--) {
        int a;
        cin >> a;

        if (a == 0) continue;

        // 输出符号
        if (first) {
            if (a < 0) cout << '-';
        } else {
            if (a > 0) cout << '+';
            else cout << '-';
        }

        if (!(abs(a) == 1 && i != 0)) cout << abs(a);

        if (i > 1) cout << 'x' << '^' << i;
        else if (i == 1) cout << 'x';

        first = false;
    }

    if (first) cout << 0;

    return 0;
}
