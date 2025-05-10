#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << num / i;
            break;
        }
    }
    return 0;
}
