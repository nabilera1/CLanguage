#include<stdio.h>

int n;

int solve()
{
	int cnt = 0;
	scanf_s("%d", &n);
	//a<=b<=c, a+b>c
	for(int a=1;a<=n;a++)
		for(int b=a;b<=n;b++)//중복 제거
			for(int c=b;c<=n;c++)//중복 제거
				if (a + b + c == n && a + b > c)
				{
					printf("(%d, %d, %d) ", a, b, c);
					cnt++;
				}
	return cnt;
}
int main()
{
	printf("%d개\n", solve());
}