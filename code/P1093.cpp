#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int cn[305];
int mt[305];
int en[305];
int pm[305];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d%d%d", &cn[i], &mt[i], &en[i]);
		pm[i] = i;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n - i; j++) {
			int z1 = cn[j] + mt[j] + en[j];
			int z2 = cn[j + 1] + mt[j + 1] + en[j + 1];

			if (z1 < z2) {
				swap(cn[j], cn[j + 1]);
				swap(mt[j], mt[j + 1]);
				swap(en[j], en[j + 1]);
				swap(pm[j], pm[j + 1]);
				continue;
			} else if (z1 == z2 && cn[j] < cn[j + 1]) {
				swap(cn[j], cn[j + 1]);
				swap(mt[j], mt[j + 1]);
				swap(en[j], en[j + 1]);
				swap(pm[j], pm[j + 1]);
				continue;
			}
		}
	}

	for (int i = 1; i <= 5; i++) {
		printf("%d%c%d\n", pm[i], ' ', cn[i] + mt[i] + en[i]);
	}
}
