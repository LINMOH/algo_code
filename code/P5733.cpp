#include<iostream>
using namespace std;

int main()
{
    char a;
    while (cin >> a)
    {
        if ('a' <= a && a <= 'z')
            cout << char(a - 32);
        else cout << a;
    }

    return 0;
}


