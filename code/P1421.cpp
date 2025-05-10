#include<iostream>
using namespace std;

int main()
{
    double DanJia = 1.9;
    int a = 0, b = 0;
    cin >> a >> b;
    double GiveMoney = a + 0.1 * b;
    int GeShu = GiveMoney / DanJia;
    cout << GeShu;
}
