#include<iostream>
using namespace std;

int local(int a)
{
    return a * 5;
}

int luogu(int b)
{
    return 11 + 3 * b;
}

int main()
{
    int n = 0;
    cin >> n;

    if (local(n) < luogu(n))
    {
        cout << "Local";
    }
    else
    {
        cout << "Luogu";
    }

    return 0;
}
