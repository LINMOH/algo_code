#include<iostream>
using namespace std;

int main()
{
    int nums[100];

    int count = 0;
    while(1)
    {
        int num;
        cin >> num;
        if (num == 0) break;
        nums[count] = num;
        count++;
    }
    for(int i = count - 1; i >= 0; i--)
    {
        cout << nums[i];
        if (i != 0)
        {
            cout << " ";
        }
    }
    return 0;
}
