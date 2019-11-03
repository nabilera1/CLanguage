//큰수가 먼저

#include<stdio.h>

int gcd(int a, int b);

int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);

	//큰수가 앞으로 나오게 하기

	printf("%d", gcd(m, n));
	return 0;
}

int gcd(int a, int b) ///////////오류발생 체크해보기
{
	//if(!b) return a;
	if(b==0) return a;
	gcd(b, a % b);
}

//#include<stdio.h>
//
//int main()
//{
//	int m, n, r, g;
//	scanf_s("%d %d", &m, &n);
//	g = m * n;
//	for (; r = m % n; n = r, m = n);
//	printf("최대공약수: %d, 최소공배수 %d", n, g / n);
//}