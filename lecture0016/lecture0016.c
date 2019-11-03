
 //* -----------------------------
 //*      개선된 순위 매김       *
 //* -----------------------------

#include <stdio.h>

#define Num 10
#define Max 100
#define Min 0

int main(void)
{
	static int a[] = { 56,25,67,88,100,61,55,67,76,56 };
	int i, rank[Max + 2];

	for (i = Min; i <= Max; i++)     // 0으로 초기화 
		rank[i] = 0;

	for (i = 0; i < Num; i++)       //각 점수를 첨자로 하는 배열 요소에 +1 
		rank[a[i]]++;

	rank[Max + 1] = 1;               // 바로 오른쪽 요소의 값을 더한다. 
	for (i = Max; i >= Min; i--)
		rank[i] = rank[i] + rank[i + 1];

	printf("   점수  순위\n");
	for (i = 0; i < Num; i++) {
		printf("%6d%6d\n", a[i], rank[a[i]+1]);  // 점수+1의 위치에 순위가 저장됨. 
	}

	return 0;
}

///*
// * --------------------
// *      순위 매김     *
// * --------------------
// */
//
//#include <stdio.h>
//
//#define Num 10
//
//int main(void)     /* 순위 매김 */
//{
//	static int a[] = { 56,25,67,88,100,61,55,67,76,56 };
//	int rank[Num];
//	int i, j;
//
//	for (i = 0; i < Num; i++) {
//		rank[i] = 1;
//		for (j = 0; j < Num; j++) {
//			if (a[j] > a[i])
//				rank[i]++;
//		}
//	}
//
//	printf("   점수  순위\n");
//	for (i = 0; i < Num; i++) {
//		printf("%6d%6d\n", a[i], rank[i]);
//	}
//
//	return 0;
//}


