#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isFu = 0;
    if (n < 0)
    {
        n = -1 * n;
        isFu = 1;
    }

    int a = 0;
    while (n > 0)
    {
        a = a * 10 + n % 10;
        n /= 10;
    }

    if (isFu) cout <<'-' << a;
    else cout  << a;

    return 0;
}
