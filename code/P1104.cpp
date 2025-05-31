#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct pnt {
	char x[25];
	int y, m, d;
	int id;
} a[50005];

bool cmp(pnt a, pnt b) {
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    if (a.d != b.d) return a.d < b.d;
	return a.id > b.id;
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s%d%d%d", &a[i].x, &a[i].y, &a[i].m, &a[i].d);
		a[i].id = i;
	}
	sort(a, a + n, cmp);

	for (int i = 0; i < n; i++) {
		printf("%s\n", a[i].x);
	}
	
}
