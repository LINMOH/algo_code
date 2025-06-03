#include <iostream>
using namespace std;

int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int ki = 0;
    cin >> ki;
    for (int kii = 0; kii < ki; kii++) {
        int num = 0;
        cin >> num;

        int ans = 0;
        for (int i = max(1, num - 54); i < num; i++) {
            if (i + sum(i) == num) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
