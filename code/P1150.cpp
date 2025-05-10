#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int Yan = n; //yan：吸到的烟
    int YanDi = n; //yandi：一开始烟蒂数量

    int XinYan = 0; //xinyan：换到的新烟

    while (YanDi >= k)
    {
        XinYan = YanDi / k;
        Yan += XinYan;
        YanDi = XinYan + (YanDi % k);
    }
    cout << Yan;
    return 0;
}
