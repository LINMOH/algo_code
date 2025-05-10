#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (cnt <= 9) cout << 0 << cnt;
            else cout << cnt;
            cnt++;
        }
        cout << endl;
    }
    cout << endl;
    int count = 1;
    for (int a = 1; a <= n; a++)
    {
        int space = 0;
        while (space < (n - a) * 2)
        {
            cout << " ";
            space++;
        }
        for (int b = 1; b <= a; b++)
        {
            if (count <= 9) cout << 0 << count;
            else cout << count;
            count++;
        }
        cout << endl;
    }
    return 0;
}
