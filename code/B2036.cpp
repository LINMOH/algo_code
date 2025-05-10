#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n = 0.0;
    cin >> n;
    if (n < 0.0)
        n = -n;
    cout << fixed << setprecision(2) << n;
}
