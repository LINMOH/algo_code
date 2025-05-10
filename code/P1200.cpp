#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int c = 1, d = 1;
    for (int i = 0; i <= a.length(); i++)
        c *= a[i] - 'A' + 1;

    for (int j = 0; j <= b.length(); j++)
        d *= b[j] - 'A' + 1;

    if (c % 47 == d % 47) cout << "GO";
    else cout << "STAY";

    return 0;
}
