#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    cin >> size;
    int nums[size];
    int num;
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        nums[i] = num;
    }
    int cnt = 0;
    int maxn = 0;
    for (int j = 0; j < size; j++)
    {
        if (nums[j] == nums[j - 1] + 1) cnt++;
        else cnt = 1;

        if (cnt > maxn) maxn = cnt;
    }
    printf("%d", maxn);
    return 0;
}
