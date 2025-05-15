#include <iostream>
using namespace std;

int a[505][505], b[505][505];

int main()
{
    int n, m, cnt = 1;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = cnt++;

    for (int k = 1; k <= m; k++)
    {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        int len = 2 * r + 1;

        for (int i = 0; i < len; i++)
            for (int j = 0; j < len; j++)
                b[i][j] = a[x - r + i][y - r + j];

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (z == 0)
                    a[x - r + j][y - r + len - 1 - i] = b[i][j];
                else
                    a[x - r + len - 1 - j][y - r + i] = b[i][j];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
