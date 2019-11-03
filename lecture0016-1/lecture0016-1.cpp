/*
 * -------------------------------------------
 *    음수 데이터 처리가 가능한 순위 매김    *
 * -------------------------------------------
 */

#include <stdio.h>

#define Num 10
#define Max 36
#define Min -20
#define Bias 1-(Min)    /* 최소값을 배열 요소의 1에 위치시킨다. */

int main(void)
{
	static int a[] = { -3,2,3,-1,-2,-6,2,-1,1,5 };
	int i, rank[Max + Bias + 1];

	for (i = Min + Bias; i <= Max + Bias; i++)
		rank[i] = 0;

	for (i = 0; i < Num; i++)
		rank[a[i] + Bias]++;

	rank[0] = 1;
	for (i = Min + Bias; i <= Max + Bias; i++)
		rank[i] = rank[i] + rank[i - 1];

	printf("   점수  순위\n");
	for (i = 0; i < Num; i++) {
		printf("%6d%6d\n", a[i], rank[a[i] + Bias - 1]);
	}

	return 0;
}
