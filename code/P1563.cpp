#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int cx[100005];
    string works[100005];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> cx[i] >> works[i];

    int a, s, now = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> s;
        if ((a == 0 && cx[now] == 1) || (a == 1 && cx[now] == 0)) now = (now + s) % n;
        else now = (now - s + n) % n;
    }
    cout << works[now];
}
