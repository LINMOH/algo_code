#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool isZh(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 4; i <= n; i += 2)
    {
        for (int j = 1; j <= i / 2; j++)
        {
            if (isZh(j) && isZh(i - j))
            {
                cout << i << '=' << j << '+' << i - j << endl;
                break;
            }
        }
    }

    return 0;
}
