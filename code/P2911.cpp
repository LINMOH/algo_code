#include<iostream>
using namespace std;

int a[10005], b[10005], c[20005], sums[100005];

int main()
{
    int a1, b1, c1;
    cin >> a1 >> b1 >> c1;

    for (int i = 1; i <= a1; i++) a[i] = i;
    for (int i = 1; i <= b1; i++) b[i] = i;
    for (int i = 1; i <= c1; i++) c[i] = i;

    for (int x = 1; x <= a1; x++)
        for (int y = 1; y <= b1; y++)
            for (int z = 1; z <= c1; z++)
                sums[a[x] + b[y] + c[z]]++;

    int max = 0, sum = 0;
    for (int i = 0; i <= 100005; i++)
    {
        if (sums[i] > max)
        {
            max = sums[i];
            sum = i;
        }
    }
    cout << sum;

    return 0;
}
