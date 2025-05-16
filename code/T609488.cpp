#include <iostream>
#include <cstring>
using namespace std;

bool b[1000005];

int main() {
    int n, k, seeds[1005];
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> seeds[i];
    }

    int cnt = 0, a;
    for (int i = 0; i < k; i++) {
        cnt = 0;
        for (int j = 0; j < n / k; j++) {
            cin >> a;

            if (b[a]) {
                cout << "\\QAQ/" << endl;
                return 0;
            }
            b[a] = 1;

            for (int t = 0; t < k; t++) {
                if (a == seeds[t]) {
                    cnt++;
                }
            }

            if (cnt > 1) {
                cout << "\\QAQ/";
                return 0;
            }
        }
    }
    cout << "\"MiaoW\"";
    return 0;
}
