#include <stdio.h>
int main() {
	int sumofmoney, total;//금액, 
	int unitofmoney, sw;//돈 단위
	int num;
	do {
		unitofmoney = 50000, sw = 1, sumofmoney = 0;
		printf("금액을 입력하세요 : ");
		scanf_s("%d", &sumofmoney);
		if (sumofmoney == 0)	break;
		if (sumofmoney < 0)
			printf("INPUT ERROR! (Quit 0) \n");
		if (sumofmoney > 1000000)
			printf("DATA RANGE(1-1000000), (Quit 0) \n");
		else {
			total = sumofmoney;
			total = ((total + 5) / 10) * 10;//1자리 반올림
			while (total != 0) {
				if (sw == 1)
					unitofmoney = unitofmoney / 5;
				else
					unitofmoney = unitofmoney / 2;
				sw = -(sw);
				num = total / unitofmoney;
				total = total % unitofmoney;

				if (num > 0) printf("%5d=%d \n", unitofmoney, num);
			}
		}
		printf("\n");
	} while (sumofmoney != 0);
	return 0;
}