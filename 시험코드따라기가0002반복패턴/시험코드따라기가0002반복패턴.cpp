#include<stdio.h>

int main()
{
	int num = 1, cnt = 0;
	while (num <= 2016)
	{
		num = num * 10 - 8;
		cnt++;
	}
	printf("%d", cnt);
}

