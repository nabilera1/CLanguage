#include<stdio.h>

#define MAX(X,Y) ((X)>(Y) ? (X):(Y))
#define N 7
int max(int a, int b)
{
	if (a > b)
		return a;
	return b;
}


int main()
{
	int p[51] = { 0,1,5,8,9,10,17,17,20,24,30, };
	int r[N + 1] = { 0, };

	r[0] = p[0];
	r[1] = p[1];

	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		for (int j = 0; j <=i; j++)
		{
			temp = MAX(temp, r[i - j] + p[j]);
		}
		r[i] = temp;
	}
	//printf("최대이익 : %d\n", r[N]); 

	for (int i = 1; i <= N; i++)
	{
		printf("길이 %d : -> 최대이익 : %d\n",i, r[i]);
	}
	return 0;
}