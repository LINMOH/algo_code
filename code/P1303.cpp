#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int ai[2005], bi[2005], ans[2005], ci[2005];

int main()
{
    string as, bs;
    cin >> as >> bs;

    int len = as.length() + bs.length();

    for (int i = as.length() - 1, j = 1; i >= 0; i--, j++)
        ai[j] = as[i] - '0';
    
    for (int i = bs.length() - 1, j = 1; i >= 0; i--, j++)
        bi[j] = bs[i] - '0';

    for (int i = 1; i <= as.length(); i++)
        for (int j = 1; j <= bs.length(); j++)
            ci[i + j - 1] += ai[i] * bi[j];

    for (int i = 1; i <= len; i++)
    {
        ci[i + 1] += ci[i] / 10;
        ci[i] %= 10;
    }
    
    while (len > 1 && ci[len] == 0)
        len--;

    for (int i = len; i >= 1; i--)
        cout << ci[i];

    return 0;
}
