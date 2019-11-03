#include<stdio.h>
int cnt, chk[21][21][21];
void solve(int n, int a, int b, int c)
{
	if (a + b + c == n)
	{
		if (a <= b && b <= c && a + b > c && chk[a][b][c] == 0)
		{
			printf("(%d %d %d)", a, b, c);
			cnt++;
			chk[a][b][c] = 1;
		}
		return;
	}
	solve(n, a, b, c + 1);
	solve(n, a, b + 1, c);
	solve(n, a + 1, b, c);
}
int main()
{
	int n;
	scanf_s("%d", &n);
	solve(n, 1, 1, 1);
	printf("%d°³", cnt);
}