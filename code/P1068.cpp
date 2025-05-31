#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[5005], b[5005];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d%d", &a[i], &b[i]);
	}

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (b[j] < b[j + 1]) {
                swap(b[j], b[j + 1]);
                swap(a[j], a[j + 1]);
            } else if (b[j] == b[j + 1] && a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
	m = int(m *= 1.5);
	int ln = b[m - 1];

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] >= ln) {
			cnt++;
		} else {
			break;
		}
	}

	printf("%d%c%d\n", ln, ' ', cnt);
	for (int i = 0; i < cnt; i++) {
		printf("%d%c%d\n", a[i], ' ', b[i]);
	}
}
