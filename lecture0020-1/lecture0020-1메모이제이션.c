#include<stdio.h>
#define MAX_SIZE 100


int fibonacci(int n) {
	static int arr[MAX_SIZE];
	if (n < 2) return n;
	if (arr[n] > 0) return arr[n];
	else return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
	int num = 10;
	int result;

	result = fibonacci(num);
	printf("%d번째 fibonacci 수열 값: %d", num, result);
	return 0;
}
