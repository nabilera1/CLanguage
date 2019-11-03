//배열의 삽입

#include<stdio.h>

int main()
{
	char arr[5] = { 'A','B','D','E'};
	char c = 'C';
	int i, tmp, tmp2;
	for (i = 0; i < 5; i++)
	{
		printf("%2c", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] > c) break;
	}
	printf("\n");

	tmp = arr[i];
	arr[i++] = c;

	for (; i < 5; i++)
	{
		tmp2 = arr[i];
		arr[i] = tmp;
		tmp = tmp2;
	}
	printf("1. %c", tmp);
	printf("2. %c", tmp2);

	for (i = 0; i < 5; i++)
	{
		printf("%2c", arr[i]);
	}

}