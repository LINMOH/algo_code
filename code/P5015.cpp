#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a;
    int lng = 0;
    while (cin >> a)
        lng += a.length();
    cout << lng;

    return 0;
}

