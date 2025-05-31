#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct pnt {
	int x, y, z;
} a[50005];

bool cmp(pnt a, pnt b) {
	return a.z < b.z;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &a[i].x, &a[i].y, &a[i].z);
	}
	sort(a, a + n, cmp);

	double sum = 0;

	for (int i = 0; i < n - 1; i++) {
		sum += sqrt((a[i].x - a[i + 1].x) * (a[i].x - a[i + 1].x) + (a[i].y - a[i + 1].y) * (a[i].y - a[i + 1].y) + (a[i].z - a[i + 1].z) * (a[i].z - a[i + 1].z));
	}
	printf("%0.3lf", sum);
}
