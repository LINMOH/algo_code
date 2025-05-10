#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float p = (a + b + c) * 0.5;
    float s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(1) << s;
}
