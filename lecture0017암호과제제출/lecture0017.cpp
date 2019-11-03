#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int seed;
	int key1, key2, key3, cir = 0;
	char sen[100];
	int choose;
	printf("암호화하려면 0, 해독하려면 1을 입력해주세요 : ");
	scanf("%d", &choose);
	switch (choose) {

	case 0://암호화
		printf("암호화할 문장을 입력해주세요 : ");
		scanf("%s", sen);
		printf("암호를 풀기 위한 시드 값을 입력해주세요(1000미만) :");
		scanf("%d", &seed);
		printf("\n시드 %d로 암호화할 문장은 %s입니다", seed, sen);

		key1 = seed / 100;
		key2 = (seed - key1 * 100) / 10;
		key3 = seed - key1 * 100 - key2 * 10;

		for (int i = 0; sen[i] != 0; i++) {
			cir++;
			if (cir > 3) cir = 1;

			switch (cir) {
			case 1:
				sen[i] = sen[i] + key1;
				break;

			case 2:
				sen[i] = sen[i] - key2;
				break;

			case 3:
				sen[i] = sen[i] + key3;
				break;

			}
		}
		printf("\n\n암호화된 문장 \n");
		for (int i = 0; sen[i] != 0; i++)
			printf("%c", sen[i]);
		printf("\n\n");
		system("pause");
		break;



	case 1://해독
		printf("해독할 문장을 입력해주세요 : ");
		scanf("%s", sen);
		printf("현재의 시드 값을 입력해주세요(1000미만) :");
		scanf("%d", &seed);
		printf("\n시드 %d로 해독할 문장은 %s입니다", seed, sen);

		key1 = seed / 100;
		key2 = (seed - key1 * 100) / 10;
		key3 = seed - key1 * 100 - key2 * 10;

		for (int i = 0; sen[i] != 0; i++) {
			cir++;
			if (cir > 3) cir = 1;

			switch (cir) {
			case 1:
				sen[i] = sen[i] - key1;
				break;

			case 2:
				sen[i] = sen[i] + key2;
				break;

			case 3:
				sen[i] = sen[i] - key3;
				break;

			}
		}
		printf("\n\n해독된 암호 \n");
		for (int i = 0; sen[i] != 0; i++)
			printf("%c", sen[i]);
		printf("\n\n");
		system("pause");
		break;

	}
}