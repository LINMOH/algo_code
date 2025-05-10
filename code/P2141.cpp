#include<iostream>
using namespace std;

int a[105];
bool used[10005] = {0};
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int l = 0; l < n; l++)
                if (a[i] + a[j] == a[l] && i != j && i != l && j != l && used[a[l]] == 0)
                {
                    cnt++;
                    used[a[l]] = 1;
                }
                cout << cnt;
            return 0;
}
