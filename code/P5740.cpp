#include<iostream>
#include<cstring>
using namespace std;

string names[1005];
int cn[1005], ma[1005], en[1005], maxFen[1005];

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> names[i] >> cn[i] >> ma[i] >> en[i];
        maxFen[i] += cn[i] + ma[i] + en[i];
    }

    int maxIndex = 0;
    for (int i = 0; i < n; i++)
        if (cn[i] + ma[i] + en[i] > maxFen[maxIndex]) maxIndex = i;

        cout << names[maxIndex] << ' ' << cn[maxIndex] << ' ' << ma[maxIndex] << ' ' << en[maxIndex];

    return 0;
}
