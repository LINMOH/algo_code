#include <iostream>
#include <cstring>
using namespace std;

char a[105][105];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int cnt = 0;
            if (a[i][j] == '*')
                cout << '*';
            else if (a[i][j] == '?')
            {
                for (int x = -1; x <= 1; x++)
                    for (int y = -1; y <= 1; y++)
                        if (a[i + x][j + y] == '*')
                            cnt++;
                cout << cnt;
            }
        }
        cout << endl;
    }
}
