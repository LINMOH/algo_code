#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string a = "AEHIJLMOSTUVWXYZ12358";
string b = "A3HILJMO2TUVWXY51SEZ8";

bool ishw(string str) {
    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] != str[str.length() - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

bool isjx(string str) {
    string d = str;
    for (int i = 0; i < str.length(); i++) {
        bool found = false;
        for (int j = 0; j < a.length(); j++) {
            if (str[i] == a[j]) {
                d[i] = b[j];
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    reverse(d.begin(), d.end());
    if (d == str) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    string str;
    while (cin >> str) {
        bool hw = 0, jx = 0;
        if (ishw(str)) {
            hw = 1;
        }
        if (isjx(str)) {
            jx = 1;
        }
        if (!hw && !jx) {
            cout << str << " -- is not a palindrome." << endl << endl;
        } else if (hw && jx) {
            cout << str << " -- is a mirrored palindrome." << endl << endl;
        } else if (hw) {
            cout << str << " -- is a regular palindrome." << endl << endl;
        } else if (jx) {
            cout << str << " -- is a mirrored string." << endl << endl;
        }
    }
    return 0;
}
