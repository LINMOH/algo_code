#include<iostream>
using namespace std;

int l[2000005];

int main()
{
    int n;
    cin >> n;
    double a = 0;
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> t;
        for (int j = 1; j <= t; j++)
        {
            int index = j * a;
            l[index] = (l[index] == 0 ? 1 : 0);
        }
    }

    for(int i = 1; ;i++)
    {
        if(l[i] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}
