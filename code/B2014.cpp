#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double r = 0.0;
    cin >> r;
    double d = 2 * r;
    double c = PI * d;
    double s = PI * r * r;
    cout << fixed << setprecision(4) << d << " " << setprecision(4) << c << " " << setprecision(4) << s;
    return 0;
}
