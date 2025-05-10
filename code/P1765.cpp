#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int num[30] = {
        1, 2, 3,
        1, 2, 3,
        1, 2, 3,
        1, 2, 3,
        1, 2, 3,
        1, 2, 3, 4,
        1, 2, 3,
        1, 2, 3, 4
    };

    string a;
    getline(cin, a);
    int sum = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
            sum++;
        else
        {
            a[i] = tolower(a[i]);
            sum += num[a[i] - 'a'];
        }
    }
    cout << sum;
    return 0;
}
