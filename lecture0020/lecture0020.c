//피보나치 수열, 순환, 반복 알고리즘 비교

//순환 알고리즘
#include <stdio.h>

int fibonacci(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main(void) {
	int num = 7;
	int result;

	result = fibonacci(num);
	printf("%d번째 fibonacci 수열 값: %d", num, result);
	return 0;
}


// 반복 알고리즘
//#include <stdio.h>
//
//int fibonacci1(int n) {
//	if (n < 2) return n;
//	else {
//		int i, tmp, cur = 1, last = 0;
//		for (i = 2; i <= n; i++) {
//			tmp = cur;
//			cur += last;
//			last = tmp;
//		}
//		return cur;
//	}
//}
//
//int fibonacci2(int n) {
//	if (n < 2) return n;
//	else {
//		int i, tmp, cur = 1, last = 0;
//		for (i = 2; i <= n; i++) {
//			tmp = last;
//			last = cur;
//			cur += tmp;
//		}
//		return cur;
//	}
//}
//
//int main(void) {
//	int num = 7;
//	int result1, result2;
//
//	result1 = fibonacci1(num);
//	result2 = fibonacci2(num);
//	printf("%d번째 fibonacci1 수열 값: %d\n", num, result1);
//	printf("%d번째 fibonacci2 수열 값: %d", num, result2);
//	return 0;
//}




//피보나치 메모이제이션

//#include <stdio.h>
//#define MAX_SIZE 100
//
//int fibonacci(int n) {
//	static int arr[MAX_SIZE];
//	if (n < 2) return n;
//	if (arr[n] > 0) return arr[n];
//	else return arr[n] = fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main(void) {
//	int num = 10;
//	int result;
//
//	result = fibonacci(num);
//	printf("%d번째 fibonacci 수열 값: %d", num, result);
//	return 0;
//}