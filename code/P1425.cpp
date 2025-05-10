#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // a:b --> c:d
    int hour = c - a;
    int minute = 0;
    if (b >= d)
    {
        minute = d + 60 - b;
        hour--;
    }
    else
    {
        minute = d - b;
    }

    cout << hour << " " << minute;

    // cout << fixed << setprecision(1) << s;
}
