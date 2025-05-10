#include<iostream>
#include<cmath>
using namespace std;

int nums[2000];

bool isRun(int n)
{
    if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int a, b, cnt = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isRun(i))
        {
            nums[cnt] = i;
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
        cout << nums[i] << ' ';

    return 0;
}
