//작은 문제에서 구한 정답을 배열에 저장하여
//큰 문제를 해결하는데 사용하자.
//메모이제이션
//피보나치 수열


#include<stdio.h>
int d[100] = { 0, };

int dp(int x) 
{
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x];
	return d[x]= dp(x - 1) + dp(x - 2);
}

int main()
{
	int n = 5;
	printf("%d != %d \n", dp(n));
}