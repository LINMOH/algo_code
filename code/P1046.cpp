#include<iostream>
using namespace std;

int main()
{
    int apples[10];
    for (int i = 0; i <= 9; i++)
    {
        int high = 0;
        cin >> high;
        apples[i] = high;
    }

    int hand = 0;
    int count = 0;
    cin >> hand;

    for (int j = 0; j <= 9; j++)
    {
        if (apples[j] <= hand + 30)
        {
            count++;
        }
    }
    cout << count;
}
