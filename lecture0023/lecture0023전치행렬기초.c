#include <stdio.h>

int n;
int a[1001][1001], c[1001][1001];
int main() {
	printf("n*n matrix : n=");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!c[i][j]) // 
			{
				int tmp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = tmp;
				c[j][i] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

}