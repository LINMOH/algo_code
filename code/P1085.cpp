#include <iostream>
using namespace std;
int main(){
    int max=8,maxi=0;
    for(int i=1;i<=7;i++){
        int kewai,school;
        cin>>school>>kewai;
        if(max<kewai+school){
            max=kewai+school;
            maxi=i;
        }
    }
    cout<<maxi;
    return 0;
}
