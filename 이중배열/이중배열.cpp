//이중배열의 코드 흐름에 대해 알아보자.

#include<stdio.h>

int main()
{
	//int a[100] = { 0,2,3,4,5,1 };//a
	int a[100] = { 0,5,4,3,2,1 }; //b
	for (int i = 1; i <= 5; i++)
	{
		a[i] = a[a[i]];//034513
		//printf("a[%d]=%d\n", i, a[i]);
	}
	for (int i = 1; i <= 5; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
	//a:034513, b:012321
	return 0;
}