#include <stdio.h>

int ken[] = { 45,56,13,43,95,19,7,68 };
int i, cnt;

cnt = sizeof(ken) / sizeof(int);

main() {
	shell_a_sort(ken, cnt);
	for (i = 0; i < cnt; i++) {
		printf("%3d", ken[i]);
	}
}

shell_a_sort(data, n)
int data[], n; {
	int i, j, k, tmp;

	k = n / 2;
	while (k > 0) {
		for (i = k; i < n; i++) {
			j = i - k;
			while (j >= 0) {
				if (data[j] > data[j + k]) {
					tmp = data[j];
					data[j] = data[j + k];
					data[j + k] = tmp;
					j -= k;
				}
				else {
					j = -1;
				}
			}
		}
		k /= 2;
	}
}
