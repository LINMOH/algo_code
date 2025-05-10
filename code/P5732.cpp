#include<iostream>
using namespace std;

int nums[22][22];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        nums[i][1] = 1;
        nums[i][i] = 1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 2; j <= i; j++)
            nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cout << nums[i][j] << (j == i ? '\n' : ' ');
    return 0;
}
