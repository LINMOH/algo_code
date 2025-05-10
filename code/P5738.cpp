#include<iostream>
#include<cmath>
using namespace std;

int nums[105][25];
double fen[105];

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> nums[i][j];

    for (int i = 0; i < n; i++)
    {
        int max = 0, min = 10, sum = 0;
        for (int j = 0; j < m; j++)
        {
            if (nums[i][j] < min) min = nums[i][j];
            if (nums[i][j] > max) max = nums[i][j];
            sum += nums[i][j];
        }
        sum = sum - max - min;
        fen[i] = (double) sum / (double) (m - 2);
    }

    double maxn = 0.0;
    for (int i = 0; i < n; i++)
        if (fen[i] > maxn) maxn = fen[i];
        printf("%0.2f", maxn);
    return 0;
}
