#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string names[8];
    int a[8], b[8];

    for (int i = 0; i < n; i++)
    {
        cin >> names[i] >> a[i] >> b[i];
        a[i]++;
        b[i] += b[i] / 5;
        if (b[i] > 600) b[i] = 600;
    }
    for (int i = 0; i < n; i++)
        cout << names[i] << ' ' << a[i] << ' ' << b[i] << endl;
    return 0;
}
