#include <stdio.h>
int rev(int n)
{
	int s = 0;
	while (n)
	{
		s = s * 10;
		s = s + (n % 10);
		n = n / 10;
	}
	return s;
}
int main()
{
	//int sum, n;
	int 합, n;
	for (int i = 100; i <= 10000; i++)
	{
		합 = i + rev(i);
		if (합 == rev(합))//palindrome
			printf("%d ",i);
	}
	return 0;
}
