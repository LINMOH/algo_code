#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    int num;
    cin >> num;
    a = num / 100;
    b = num / 10 % 10;
    c = num % 10;
    cout << c << b << a;
}
