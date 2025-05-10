#include<iostream>
#include<cstring>
using namespace std;

char num[30];

int main()
{
    string a;
    cin >> a;

    for (int i = 0; i < a.length(); i++)
    {
        num[int(a[i] - 'a' + 1)]++;
    }

    int minn = 110, maxn = 0;
    for (int i = 1; i <= 26; i++)
    {
        if (num[i] > maxn) maxn = num[i];
        if (num[i] > 0 && num[i] < minn) minn = num[i];
    }

    int cha = maxn - minn;

    if (cha < 2)
    {
        cout << "No Answer" << endl << 0;
        return 0;
    }

    for (int i = 2; i * i <= cha; i++)
    {
        if (cha % i == 0)
        {
            cout << "No Answer" << endl << 0;
            return 0;
        }
    }

    cout << "Lucky Word" << endl << cha;
}
