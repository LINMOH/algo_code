#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[110][110], b;
int main(){
    cin>>n>>m;
    //矩阵A
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    //矩阵B
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>b;
            cout<<a[i][j]+b<<' ';//矩阵C
        }
        puts("");//换行！！！
    }
    return 0;
}
