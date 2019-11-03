//2*n 크기의 직사각형을 1*2, 2*1 벽돌로 채우는 방법의 수를 구하는 프로그램을 작성하자.

//입력 : 1<=n<=1000
//출력 : 2이면 2가 출력

#include<stdio.h>

int d[1001];

int dp(int x)
{
	if (x == 1) return 1;
	if (x == 2) return 2;
	if (d[x] !=0) return d[x];
	return d[x] = (dp(x - 1) + dp(x - 2));
}
int main()
{
	int n;
	printf("2*n : 구하고자 하는 n의 개수는? ");
	scanf_s("%d", &n);
	//scanf_s("%d", &n, sizeof(n));
	printf("n= %d 인 경우 방법의 수는 %d이다.", n, dp(n));
}