#include<iostream>
#include<cmath>
using namespace std;

long long f(int n)
{
    if (n == 1)
        return 1;
    else
        return (long long)n * f(n - 1);
}

int main()
{
    int n = 0;
    cin >> n;
    cout << f(n);

    return 0;
}
