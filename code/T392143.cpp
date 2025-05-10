#include<iostream>
using namespace std;

int main()
{
    int a,b,c = 0;
    for (int num = 100; num <= 999; num++)
    {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;

        if (num == (a * a * a) + (b * b * b) + (c * c * c))
        {
            cout << num << " ";
        }
    }
}
