#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int nums[205];
    int i = 0;

    while (n != 1)
    {
        nums[i++] = n;
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
    }
    nums[i] = 1;

    for (int j = i; j >= 0; j--)
        cout << nums[j] << ' ';

    return 0;
}
