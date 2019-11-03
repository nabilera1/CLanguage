#include <stdio.h>
int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}
int main()
{
	int v1, v2, v3, i;
	scanf_s("%d %d %d", &v1, &v2, &v3);
	for (i = min(v1, min(v2, v3)); i >= 0; i--)
	{
		if (v1 % i == 0 && v2 % i == 0 && v3 % i == 0)
			break;
	}
	printf("%d\n", i);
	return 0;
}
