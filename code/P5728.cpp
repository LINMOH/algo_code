#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin>> n;
    int s[n][3];
    for(int i = 0; i < n; i++)
        cin>> s[i][0] >> s[i][1] >> s[i][2];
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(abs(s[i][0] - s[j][0])<=5
                && abs(s[i][1]-s[j][1]) <= 5
                && abs(s[i][2]-s[j][2]) <= 5
                && abs((s[i][0]+s[i][1]+s[i][2])-(s[j][0]+s[j][1]+s[j][2])) <= 10)
                cnt++;
            cout << cnt;
}
