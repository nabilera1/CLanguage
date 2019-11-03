#include<stdio.h>

int main() {
	int i, j, t, a[3] = { 2,0,1 };
	for (i = 0; i < 3; i++)
	{
		t = i;
		for (j = 1; j <= 7777; j++) t = a[t];
		printf("%d ", t);
	}
	return 0;
}

//2 0 1