//#include<cstdio>
#include<stdio.h>

int first = 1;   //1000이면 0001의 앞자리 0을 제거하기 위함

void solve(int n)  //102라면 또는 1020이라면
{
	if (n == 0) return;
	if(first && (n%10)==0)//처음 실행시 끝자리가 0인지 체크
		solve(n/10);
	else
	{
		printf("%d", n % 10); //2
		first = 0;
		solve(n/10);  //10
	}
}

int main()
{
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);       
	printf("거꾸로 숫자 출력 : ");
	solve(n);
	return 0;
}