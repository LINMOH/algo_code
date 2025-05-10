#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long num = 1;
    for (int i = 1; i <= n; i++)
    {
        num *= 2;
    }
    cout << num;
    //cout << fixed << setprecision(3) << d;
}
