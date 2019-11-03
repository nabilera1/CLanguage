#include<stdio.h>
int cnt;
int solve(int n)
{
	int ans = 0;
	printf("약수는 ");
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			ans += i;
			cnt++;
		}
	}
	return ans;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("약수의 합=%d, 약수의 개수=%d\n", solve(n), cnt);
}