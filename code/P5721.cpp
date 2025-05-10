#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int num = 1;
    for (int thisn = n; thisn > 0; thisn--)
    {
        for (int j = thisn; j > 0; j--)
        {
            if (num < 10)
                cout << 0 << num;
            else
                cout << num;
            num++;
        }
        cout << endl;
    }
}
