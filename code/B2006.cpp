#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    cout << fixed << setprecision(2) << (float)(x * a - y * b) / (a - b);
    return 0;
}
