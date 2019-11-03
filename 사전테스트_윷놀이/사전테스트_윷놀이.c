#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int yoot[4];


void Rand_yoot()
{
	int i;
	for (i = 0; i < 4; i++)
	{
		yoot[i] = rand() % 2;
		//printf("%d", yoot[i]);
	}

}
int count_yoot()
{
	int i,cnt=0;

	for (i = 0; i < 4; i++)
		if (yoot[i] == 1) cnt++;
	return cnt;
}
int main()
{
	int n, n1=1;


	srand((unsigned)time(NULL));
	printf("숫자를 입력하고 엔터를 치면 윷가락을 던집니다.\n");
	printf("윷을 던질 횟수:");
	scanf_s("%d", &n);
	do {
		printf("%d번째 시도\n", n1++);
		Rand_yoot();
		switch (count_yoot()) {
		case 1: printf("도\n");
			break;
		case 2: printf("개\n");
			break;
		case 3: printf("걸\n");
			break;
		case 4: printf("윷\n");
			break;
		default: printf("모\n");
		}
	} while (--n);
	
	
	return 0;
}


//
//#include <stdio.h>
//int f(int a, int b, int c, int d)
//{
//	return a + b + c + d;
//}
//main()
//{
//	int a, b, c, d, s;
//	printf("4개의 윷 상태를 입력하세요.\n");
//	printf("(0:뒤집어지지 않은 상태, 1:뒤집어진 상태):");
//	scanf_s("%d %d %d %d", &a, &b, &c, &d);
//	switch (f(a, b, c, d))
//	{
//	case 1: printf("도\n");
//		break;
//	case 2: printf("개\n");
//		break;
//	case 3: printf("걸\n");
//		break;
//	case 4: printf("윷\n");
//		break;
//	default: printf("모\n");
//	}
//}
