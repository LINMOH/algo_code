#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int k, x;
    for (int i = 1; i <= 100; i++) //x
    {
        for (int j = 100; j > 0; j--) //k
        {
            if ((7 * i + 21 * j) * 52 == n)
            {
                k = j;
                x = i;
            }
        }
    }
    cout << x << endl << k;
    return 0;
}
