#include<iostream>
using namespace std;

int nums[55][55];

int main()
{
    int n;
    cin >> n;


    nums[1][n / 2 + 1] = 1;

    int l, h;
    for (int k = 2; k <= n * n; k++)
    {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (nums[i][j] == k - 1)
                {
                    h = i;
                    l = j;
                }
                if (h == 1 && l != n) nums[n][l + 1] = k;
                if (l == n && h != 1) nums[h - 1][1] = k;
                if (h == 1 && l == n) nums[h + 1][l] = k;
                if (h != 1 && l != n)
                {
                    if (nums[h - 1][l + 1] == 0) nums[h - 1][l + 1] = k;
                    else nums[h + 1][l] = k;
                }
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cout << nums[i][j] << (j == n ? '\n' : ' ');

    return 0;
}
