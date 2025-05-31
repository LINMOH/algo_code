#include <iostream>
#include <cmath>
#include <cmath>
using namespace std;

int main() {
    int p1, p2, p3;
    string a;
    cin >> p1 >> p2 >> p3 >> a;

    for (int i = 0; i < a.length(); i++) {
        char n = a[i];
        char aft, bef;

        if (i > 0) {
            aft = a[i + 1];
            bef = a[i - 1];
        }
        

        if (n == '-' && ((bef >= '0' && bef <= '9' && aft >= '0' && aft <= '9') ||(bef >= 'a' && bef <= 'z' && aft >= 'a' && aft <= 'z')) && aft > bef) {
            if (p3 == 1) {
                for (char j = bef + 1; j < aft; j++) {
                    for (int k = 1; k <= p2; k++) {
                        if (p1 == 3)
                            cout << '*';
                        else if (p1 == 1)
                            cout << j;
                        else 
                            cout << char(toupper(j));
                    }
                }
            } else if (p3 == 2) {
                for (char j = aft - 1; j > bef; j--) {
                    for (int k = 1; k <= p2; k++) {
                        if (p1 == 3)
                            cout << '*';
                        else if (p1 == 1)
                            cout << j;
                        else 
                            cout << char(toupper(j));
                    }
                }
            }

        } else {
            cout << n;
        }
    }

    return 0;
}
