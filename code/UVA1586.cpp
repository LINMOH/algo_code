#include <iostream>
#include <string>
using namespace std;

int main() {
    int k = 0;
    cin >> k;

    for (int j = 0; j < k; j++)
    {
        string a;
        cin >> a;

        double c = 12.01, h = 1.008, o = 16.00, n = 14.01;
        double sum = 0;

        for (int i = 0; i < int (a.length()); i++) {
            double l;
            if (a[i] == 'C') {
                l = c;
            } else if (a[i] == 'H') {
                l = h;
            } else if (a[i] == 'O') {
                l = o;
            } else if (a[i] == 'N') {
                l = n;
            } else {
                continue;
            }
            
            int num = 0;
            for (int w = 1; i + w < int (a.length()); w++) {
                if (a[i + w] >= '0' && a[i + w] <= '9') {
                    num = num * 10 + (a[i + w] - '0');
                } else {
                    break;
                }
            }
            if (num == 0) {
                num = 1;
            }

            sum += l * num;
        }

        printf("%0.3lf\n", sum);
    }
    return 0;
}
