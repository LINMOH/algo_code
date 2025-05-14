#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int ai[505], bi[505], ans[505];

int main()
{
    string as, bs;
    cin >> as >> bs;

    int maxi = max(as.length(), bs.length());

    for (int i = as.length() - 1, j = 1; i >= 0; i--, j++)
        ai[j] = as[i] - '0';

    for (int i = bs.length() - 1, j = 1; i >= 0; i--, j++)
        bi[j] = bs[i] - '0';

    for (int i = 1; i <= maxi; i++)
    {
        ans[i] += ai[i] + bi[i];

        if (ans[i] >= 10)
        {
            ans[i + 1] = ans[i] / 10;
            ans[i] %= 10;
        }
    }

    /*
    for (int i = 0; i < as.length(); i++) cout << ai[i];
    cout << endl;
    for (int i = 0; i < bs.length(); i++) cout << bi[i];
    */

    if (ans[maxi + 1] != 0)
        maxi += 1;
    for (int i = maxi; i >= 1; i--) cout << ans[i];
    return 0;
}
