#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    int min = 10000;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;
        if (num < min)
        {
            min = num;
        }
    }
    cout << min;
    return 0;
}
