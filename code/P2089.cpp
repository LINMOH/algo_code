#include <iostream>
using namespace std;

int ans[500005][11];

int main() {
    int num;
    cin >> num;
    
    int cnt = 0;
    for (int a = 1; a <= 3; a++) {
        for (int b = 1; b <= 3; b++) {
            for (int c = 1; c <= 3; c++) {
                for (int d = 1; d <= 3; d++) {
                    for (int e = 1; e <= 3; e++) {
                        for (int f = 1; f <= 3; f++) {
                            for (int g = 1; g <= 3; g++) {
                                for (int h = 1; h <= 3; h++) {
                                    for (int i = 1; i <= 3; i++) {
                                        for (int j = 1; j <= 3; j++) {
                                            if (a + b + c + d + e + f + g + h + i + j == num) {
                                                cnt++;
                                                ans[cnt][0] = a;
                                                ans[cnt][1] = b;
                                                ans[cnt][2] = c;
                                                ans[cnt][3] = d;
                                                ans[cnt][4] = e;
                                                ans[cnt][5] = f;
                                                ans[cnt][6] = g;
                                                ans[cnt][7] = h;
                                                ans[cnt][8] = i;
                                                ans[cnt][9] = j;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }  
            }
        }
    }
    cout << cnt << endl;

    if (cnt == 0) {
        return 0;
    }

    for (int idx = 1; idx <= cnt; idx++) {
        for (int j = 0; j < 10; j++) {
            cout << ans[idx][j];
            if (j != 9) cout << ' ';
        }
        cout << endl;
    }
}
