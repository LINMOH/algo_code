#include <iostream>
using namespace std;

int a[205], b[205];
int win[5][5] = {
    // 0 剪刀  1 石头  2 布  3 蜥蜴人  4 斯波克
    {0, -1, 1, 1, -1},
    {1, 0, -1, 1, -1},
    {-1, 1, 0, -1, 1},
    {-1, -1, 1, 0, 1},
    {1, 1, -1, -1, 0}
};

int main()
{
    int q, w, e, A = 0, B = 0;
    cin >> q >> w >> e;

    for (int i = 0; i < w; i++) cin >> a[i];
    for (int i = 0; i < e; i++) cin >> b[i];

    for (int i = 0; i < q; i++)
    {
        int f = a[i % w], s = b[i % e];
        if (win[f][s] == 1) A++;
        else if (win[f][s] == -1) B++;
    }

    cout << A << ' ' << B << endl;
    return 0;
}
