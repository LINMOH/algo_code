#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    int tong = 20000 / (3.14 * r * r * h) + 1;
    cout << tong;
    return 0;
}
