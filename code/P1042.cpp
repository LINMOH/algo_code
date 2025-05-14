#include <iostream>
#include <string>  // 别忘了加上这个
#include <cstdlib> // for abs()
using namespace std;

int main() {
    string a;
    char c;

    // 读取输入直到遇到 E
    while (cin >> c && c != 'E') {
        if (c == 'W' || c == 'L') {
            a += c;
        }
    }

    // 11 分制
    int hua = 0, dui = 0;
    for (char ch : a) {
        if (ch == 'W') hua++;
        else if (ch == 'L') dui++;

        if ((hua >= 11 || dui >= 11) && abs(hua - dui) >= 2) {
            cout << hua << ":" << dui << endl;
            hua = 0;
            dui = 0;
        }
    }
    cout << hua << ":" << dui << endl; // 未结束的最后一局

    cout << endl;

    // 21 分制
    hua = 0;
    dui = 0;
    for (char ch : a) {
        if (ch == 'W') hua++;
        else if (ch == 'L') dui++;

        if ((hua >= 21 || dui >= 21) && abs(hua - dui) >= 2) {
            cout << hua << ":" << dui << endl;
            hua = 0;
            dui = 0;
        }
    }
    cout << hua << ":" << dui << endl; // 未结束的最后一局

    return 0;
}
