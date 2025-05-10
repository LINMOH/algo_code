#include<iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while(num > 0)
        {
            if (num % 10 == x) cnt++;
            num /= 10;
        }
    }
    printf("%d", cnt);

    return 0;
}
