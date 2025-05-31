#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[1005];

int main() {
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	sort(a, a + n);

	for (int i = 0; i < n - 1; ) {
		if (a[i] == a[i + 1]) {
			for (int j = i + 1; j < n - 1; j++) {
				a[j] = a[j + 1];
			}
			n--;
		} else {
			i++;
		}
	}
	printf("%d\n", n);
	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], ' ');
	}
}
