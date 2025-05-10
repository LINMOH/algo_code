#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

string names[1005];
int a[1005], b[1005], c[1005];
int ind[1000000][2];  // 增大 ind 数组的大小

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> names[i] >> a[i] >> b[i] >> c[i];

    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(abs(a[i] - a[j]) <= 5
                && abs(b[i] - b[j]) <= 5
                && abs(c[i] - c[j]) <= 5
                && abs((a[i] + b[i] + c[i]) - (a[j] + b[j] + c[j])) <= 10)
            {
                // 确保第一个名字小于第二个名字
                if(names[i] < names[j]) {
                    ind[cnt][0] = i;
                    ind[cnt][1] = j;
                } else {
                    ind[cnt][0] = j;
                    ind[cnt][1] = i;
                }
                cnt++;
            }

            // 直接输出所有符合条件的对手组合，已经按字典序排序
            for (int i = 0; i < cnt; i++) {
                cout << names[ind[i][0]] << " " << names[ind[i][1]] << endl;
            }

            return 0;
}
