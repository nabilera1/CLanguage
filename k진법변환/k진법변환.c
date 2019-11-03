#include<stdio.h>

char base[21] = "0123456789ABCDEFGHIJ";

void f(int n, int k)
{
	if (n < k)
		printf("%c", base[n]);
	else
	{
		f(n / k, k); 
	    printf("%c", base[n % k]); 
		//f(n / k, k), printf("%c", base[n % k]);
	}
}

int main()
{
	int n, k;
	printf("Enter n, k : "), scanf_s("%d %d", &n, &k);
	printf("%dÀÇ %dÁø¹ý : ",n, k);
	f(n, k);
	return 0;
}