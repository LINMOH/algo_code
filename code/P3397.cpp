#include<iostream>
using namespace std;
int nu[1002][1002];

int main()
{
    int n, z;
    cin >> n >> z;

    int x1, x2, y1, y2;
    for (int i = 0; i < z; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int a = x1; a <= x2; a++)
            for (int b = y1; b <= y2; b++)
                nu[a][b] += 1;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cout << nu[i][j] << (j == n ? '\n' : ' '); // 修正输出部分
            return 0;
}
