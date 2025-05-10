#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long nums[48];
    nums[0] = 1;
    nums[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
    cout << nums[n - 1] << ".00" << endl;

    return 0;
}
