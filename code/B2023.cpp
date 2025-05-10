#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char a = 0;
    int b = 0;
    float c = 0.0;
    double d = 0.0;

    cin >> a >> b >> c >> d;
    cout << a << " " << b << " " << fixed << setprecision(6) << c << " " << setprecision(6) << d;
}
