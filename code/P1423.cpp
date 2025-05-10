#include<iostream>
using namespace std;

int main()
{
    double s;
    cin >> s;
    double step = 2;
    int count = 0;
    while (s > 0)
    {
        s -= step;
        step = step * 0.98;
        count ++;
    }
    cout << count;
    return 0;
}
