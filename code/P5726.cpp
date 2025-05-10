#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int maxNum = 0;
    int minNum = 10;
    int sum = 0;
    for (int a = 1; a <= n; a++)
    {
        int fen = 0;
        cin >> fen;

        if (fen > maxNum)
        {
            maxNum = fen;
        }
        if (fen < minNum)
        {
            minNum = fen;
        }
        sum += fen;
    }
    sum = sum - minNum - maxNum;
    double dsum = sum;
    dsum = dsum / double((n - 2));
    cout << fixed << setprecision(2) << dsum;
}
