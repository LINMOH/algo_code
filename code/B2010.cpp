#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int shang = a / b;
    int yuShu = a - shang * b;
    cout << shang << " " << yuShu;
}
