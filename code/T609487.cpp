#include <iostream>
using namespace std;

int main() {
    int w, f, a, r;
    cin >> w >> f >> a >> r;

    bool b1 = 0, b2 = 0, b3 = 0;

    if (w != 0 && ((double) f / (double) w) <= 0.2) {
        b1 = 1;
    }

    if (w != 0 && ((double) a / (double) w) <= 0.3) {
        b2 = 1;
    }

    if (w >= r) {
        b3 = 1;
    }

    if (b1 && b2 && b3) {
        cout << "Accepted";
    } else {
        cout << "Rejected";
    }
}
