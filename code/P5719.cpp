#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sumA = 0, sumB = 0;
    int cntA = 0, cntB = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sumA += i;
            cntA++;
        }
        else
        {
            sumB += i;
            cntB++;
        }
    }
    double ansA = double (sumA) / double (cntA);
    double ansB = double (sumB) / double (cntB);

    printf("%.1f %.1f", ansA, ansB);
    return 0;
}
