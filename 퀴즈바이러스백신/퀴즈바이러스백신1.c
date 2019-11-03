#include <stdio.h>
int main()
{
	int v1, v2, v3, i, sol,min;
	scanf_s("%d %d %d", &v1, &v2, &v3);
	min = (v1 > v2 ? ((v2 > v3) ? v3 : v2) : v1 > v3 ? v3 : v1);
	for (i = 1; i <= min; i++)
	{
		if (v1 % i == 0 && v2 % i == 0 && v3 % i == 0)
			sol = i;
	}
	printf("%d\n", sol);
	return 0;
}