#include<iostream>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    int day = 0;
    while (a >= 1)
    {
        day++;
        a /= 2;
    }
    cout << day;
    return 0;
}
