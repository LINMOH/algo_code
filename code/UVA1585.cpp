#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string a;
    
    for (int i = 1; i <= n; i++)
    {
        int s = 0, o = 0;
        cin >> a;
        for (int j = 0; j < a.length(); j++)
        {
            if (a[j] == 'O')
            {
                o++;
                s += o;
            }
            else
                o = 0;
        }
        cout << s << endl;
    }
}
