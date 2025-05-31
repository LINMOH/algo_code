#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

long long a[20005];

int main() {
	int n;
	long long b;
	scanf("%d%lld", &n, &b);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}

	sort (a, a + n);

	long long sum = 0;
	int j = n - 1, cnt = 0;
	while (sum < b) {
		sum += a[j];
		j--;
		cnt++;
	}
	printf("%d\n", cnt);
}
