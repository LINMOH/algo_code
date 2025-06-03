#include <iostream>
#include <cstring>
using namespace std;

int n[12] = {0};

void chai(int num) {
    while (num > 0) {
        n[num % 10]++;
        num /= 10;
    }
    return;
}

int main() {
    int ki = 0;
    scanf("%d", &ki);
    for (int kii = 0; kii < ki; kii++) {
        int num;
        scanf("%d", &num);
        memset(n, 0, sizeof(n));
        for (int i = 1; i <= num; i++) {
            chai(i);
        }
        for (int i = 0; i < 10; i++) {
            printf("%d", n[i]);
            if (i != 9) printf(" ");
        }
        printf("\n");      
    }
}
