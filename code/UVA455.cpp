#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    while (n--)
    {
        string a;
        cin >> a;
        int lng = a.length();

        for (int i = 1; i <= lng; i++) {
            string b = "", tem = "";
            if (lng % i != 0) {
                continue;
            } else {
                int num = lng / i;
                for (int j = 0; j < i; j++) {
                    b += a[j];
                }

                for (int j = 0; j < num; j++) {
                    tem += b;
                }

                if (a == tem) {
                    cout << i << endl;
                    break;
                }
            }
        }
        if (n != 0) {
            cout << endl;
        }
    }

    return 0;
}
