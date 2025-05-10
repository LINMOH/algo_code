#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a;
    while(cin >> a)
    {
        if (a + n > 'z') a = a + n - 26;
        else a += n;
        cout << a;
    }

    return 0;
}
