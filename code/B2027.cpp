#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r = 0;
    cin >> r;
    const double PI = 3.14;
    cout << fixed << setprecision(5) << (double) PI * r * r * r * 4 / 3;
}
