#include<iostream>
using namespace std;

int main()
{
    int L, m;
    cin >> L >> m;
    int a, b;
    int trees[10005];
    for (int i = 0; i < 10005; i++) trees[i] = 1;
    for (int i = 1; i <=m; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
            if (trees[j] == 1) trees[j] = 0;
    }
    int cnt = 0;
    for (int i = 0; i <= L; i++)
        if (trees[i] == 1) cnt++;
        cout << cnt << endl;
    return 0;
}
