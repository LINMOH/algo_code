#include<iostream>
#include<cmath>
using namespace std;

int a[1200][1200];

void f(int x, int y, int n)
{
    if (n == 0) a[x][y] = 1;
    else
    {
        f(x, y + (1 << n - 1), n - 1);
        f(x + (1 << n - 1), y, n - 1);
        f(x + (1 << n - 1), y + (1 << n - 1), n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    f(0, 0, n);
    for (int i = 0; i < 1 << n; i++)
    {
        for (int j = 0; j < 1 << n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }


    return 0;
}
