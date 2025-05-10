#include<iostream>
using namespace std;

int a[10];
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        int num = i;
        while(num > 0)
        {
            a[num % 10]++; //稍微不太懂
            num /= 10;
        }
    }
    for (int i = 0; i <= 9; i++)
        cout << a[i] << (i == 9 ? '\n' : ' ');
    return 0;
}
