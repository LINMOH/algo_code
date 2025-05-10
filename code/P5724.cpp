#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = 1000;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > max) max = num;
        else if (num < min) min = num;
    }
    cout << max - min;

    return 0;
}
