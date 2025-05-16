#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a;
    int k;
    cin >> k >> a;

    long long cnt = 0;
    for (int r = 0; r <= 255; r++) {
        for (int g = 0; g <= 255; g++) {
            for (int b = 0; b <= 255; b++) {
                if (a == 'r' && k + g <= r && k + b <= r) {
                    cnt++;
                } else if (a == 'g' && k + r <= g && k + b <= g) {
                    cnt++;
                } else if (a == 'b' && k + r <= b && k + g <= b) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;

}
