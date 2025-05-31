#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string a[25];

string fdmax(string x, string y) {
    if (x + y > y + x) {
        return x;
    } else {
        return y;
    }
}

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	string maxa = "";
	int maxindex = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			string mx = fdmax(a[j], a[j + 1]);
			if (mx == a[j + 1]) {
				swap(a[j], a[j +1]);
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}
