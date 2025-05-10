#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Xa, Xb, Ya, Yb;
    cin >> Xa >> Ya >> Xb >>Yb;
    double d = sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
    cout << fixed << setprecision(3) << d;
}
