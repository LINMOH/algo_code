#include <bits/stdc++.h>
using namespace std;

long long a[40][40];
bool b[40][40];
int px[10] = {-2, -1, 1, 2, 2, 1, -1, -2};
int py[10] = {1, 2, 2, 1, -1, -2, -2, -1};

int main() {
    int bx, by, mx, my;
    scanf("%d%d%d%d", &bx, &by, &mx, &my);

    b[mx][my] = 1;

    for (int i = 0; i < 8; i++) {
        int x = mx + px[i];
        int y = my + py[i];
        if (x >= 0 && x <= bx && y >= 0 && y <= by) 
            b[x][y] = 1;
    }

    a[0][0] = b[0][0] ? 0 : 1;

    for (int x = 0; x <= bx; x++) {
        for (int y = 0; y <= by; y++) {
            if (b[x][y]) continue;
            if (x > 0) a[x][y] += a[x - 1][y];
            if (y > 0) a[x][y] += a[x][y - 1];
        }
    }

    printf("%lld", a[bx][by]);

    return 0;
}
