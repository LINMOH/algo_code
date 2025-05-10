#include<bits/stdc++.h>
using namespace std;

int main()
{
    float t = 0.0;
    int n = 0;
    cin >> t >> n;

    float ml = t / (float) n;
    int cup = n * 2;
    cout << fixed << setprecision(3) << ml << endl << cup;
}
