#include<iostream>
using namespace std;

char a[15][15]; //in
char b[15][15]; //symbol

/*
 * @-@
 * ---
 * @@-
 */

bool isOne(int c)
{
    int n = c;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == b[j][n - i + 1])
                cnt++;
    if (cnt == n * n) return 1;
    else return 0;
}

bool isTwo(int c)
{
    int n = c;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == b[n - i + 1][n - j + 1])
                cnt++;
    if (cnt == n * n) return 1;
    else return 0;
}

bool isThree(int c)
{
    int n = c;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == b[n - j + 1][i])
                cnt++;
    if (cnt == n * n) return 1;
    else return 0;
}

bool isFour(int c)
{
    int n = c;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == b[i][n - j + 1])
                cnt++;
    if (cnt == n * n) return 1;
    else return 0;
}

bool isFive(int c)
{
    int n = c;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    char cpy[15][15];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cpy[i][j] = a[i][n - j + 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (cpy[i][j] == b[j][n - i + 1])
                cnt1++;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (cpy[i][j] == b[n - i + 1][n - j + 1])
                cnt2++;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (cpy[i][j] == b[n - j + 1][i])
                cnt3++;

    if (cnt1 == n * n || cnt2 == n * n || cnt3 == n * n) return 1;
    else return 0;
}

bool isSix(int c)
{
    int n = c;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == b[i][j])
                cnt++;
    if (cnt == n * n) return 1;
    else return 0;
}

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];

    if (isOne(n)) cout << 1;
    else if (isTwo(n)) cout << 2;
    else if (isThree(n)) cout << 3;
    else if (isFour(n)) cout << 4;
    else if (isFive(n)) cout << 5;
    else if (isSix(n)) cout << 6;
    else cout << 7;

    return 0;
}


