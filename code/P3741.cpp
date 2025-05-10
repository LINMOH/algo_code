#include<iostream>
#include<cstring>
using namespace std;

char a[110];

int main()
{
    int num;
    cin >> num >> a;

    int cnt = 0;
    for (int i = 0; i < num; i++)
        if (a[i] == 'V' && a[i + 1] == 'K')
        {
            cnt++;
            a[i] = 'X';
            a[i + 1] = 'X';
        }

        for (int i = 0; i < num; i++)
            if ((a[i] == 'V' && a[i + 1] == 'V') || (a[i] == 'K' && a[i + 1] == 'K'))
            {
                cnt++;
                break;
            }

            cout << cnt;
        return 0;
}
