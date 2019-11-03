//거듭 제곱 순환, 반복 알고리즘 비교

#include <stdio.h>

double power_iteration(double x, int n) { // x는 밑, n은 지수이다.
	int i;
	double r = 1.0;
	for (i = 0; i < n; i++)
		r = r * x;
	return (r);
}
double power_recursion(double x, int n) { // x는 밑, n은 지수이다.
	if (n == 0) return 1;
	else if ((n % 2) == 0) // n이 짝수인 경우
		return power_recursion(x * x, n / 2);
	else return x * power_recursion(x * x, (n - 1) / 2); // n이 홀수인 경우
}
int main(void) {
	double base = 2.0;
	int exponent = 10;
	double result;

	result = power_iteration(base, exponent);
	printf("계산 결과: %.2f\n", result);

	result = power_recursion(base, exponent);
	printf("계산 결과: %.2f\n", result);

	return 0;
}
