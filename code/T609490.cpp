#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a;
    cin >> a;
    
    int lng = a.length();
    if (lng % 2 == 1) {
        a = '0' + a;
        lng = a.length();
    }

    string b(lng, '0');

    for (int i = 0, j = lng - 1; i < lng; i += 2, j -= 2) {
        b[i] = a[j - 1];
        b[i + 1] = a[j];
    }

    int cnt = 0;
    for (int i = 0; i < lng; i++) {
        if (b[i] == '0') {
            cnt++;
        } else if (b[i] != '0') {
            break;
        }
    }

    for (int i = cnt; i < lng; i++) {
        cout << b[i];
    }

}
