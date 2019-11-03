//벽화마을

#include<stdio.h>
int main()
{
	int a, b, c;
	printf("세 개의 골목길 너비를 입력하세요:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < 200)
		printf("충돌 %d", a);
	else if (b < 200)
		printf("충돌 %d", b);
	else if (c < 200)
		printf("충돌 %d", c);
	else
		printf("통과");
	return 0;
}