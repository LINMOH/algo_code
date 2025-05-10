#include<iostream>
#include<cmath>
using namespace std;

int nums[10005];

bool isZh(int n)
{
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
        return 1;
}

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        if (!isZh(nums[i])) nums[i] = 0;
    }

    for (int i = 0; i < n; i++)
        if (nums[i] != 0) cout << nums[i] << ' ';

        return 0;
}
