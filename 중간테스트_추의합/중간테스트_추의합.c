#include <stdio.h>
int main() {
	int gram, totalWeight, count;
	int i, j, k;
	do {
		count = 0, gram = 0;
		printf("원하는 그램을 입력하세요 :");
		scanf_s("%d", &gram);
		if ((gram < 10 || gram>100) && gram != 0) {
			printf("INPUT ERROR! (DATA RANGE 10 - 100) \n\n");
			continue;
		}
		if (gram == 0)
			break;
		printf("  2g   3g   5g");
		for (i = 1; i <= 10; i++)
			for (j = 1; j <= 10; j++)
				for (k = 1; k <= 10; k++) {
					totalWeight = (i * 2) + (j * 3) + (k * 5);
					if (totalWeight == gram) {
						printf("\n");
						printf("%4d %4d %4d", i, j, k);
						count++;
					}
				}

		printf("    경우의 수 = %d\n\n", count);
	} while (gram != 0);
	return 0;
}