#include<stdio.h>

int main()
{
	static int i = 7, *p, ** pp;

	p = &i;
	pp = &p;

	printf("p\'s Address = %p\n", p);
	printf("pp\'s Address = %p\n", pp);

	(*p)++;
	printf("i=%d \t", i);
	printf("*p=%d \t", *p);
	printf("**pp=%d \n", **pp);
	
	(**pp)++;
	printf("i=%d \t", i);
	printf("*p=%d \t", *p);
	printf("**pp=%d \n", **pp);

}