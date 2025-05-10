#include<iostream>
#include<cstring>
using namespace std;

char a[270];

int main()
{
    int boy = 0, girl = 0;
    cin >> a;
    for (int i = 0; i < 260; i++)
    {
        if (a[i] == 'b' || a[i + 1] == 'o' || a[i + 2] == 'y') boy++;
        if (a[i] == 'g' || a[i + 1] == 'i' || a[i + 2] == 'r' || a[i + 3] == 'l') girl++;
    }
    cout << boy << endl << girl;
    return 0;
}
