#include<iostream>
using namespace std;

int main()
{
    int day = 0, glod = 0, tday = 0;
    cin >> day;

    for (int c = 1; c <= day; c++)
    {
        for (int i = 1; i <= c; i++) //(int i = c; i <= c; i++)
        {
            glod += c;
            tday ++;
            if (tday == day)
            {
                break;
            }
        }
        if (tday == day)
        {
            break;
        }
    }
    cout << glod;
    return 0;
}
