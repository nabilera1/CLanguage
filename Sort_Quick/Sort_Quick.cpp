#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 60000    //데이터의 개수 지정
#define SWAP(x,y,t) ((t)=(x), (x)=(y), (y)=(t))    //SWAP함수 설정
int original[MAX_SIZE];    //랜덤함수로 만든 데이터를 저장할 원본 배열
int list[MAX_SIZE];    //각 정렬 알고리즘에서 사용할 데이터 배열
int n; //데이터의 개수를 받는 전역변수 설정
int sorted[MAX_SIZE]; //합병정렬에서 사용할 데이터를 저장할 배열
clock_t start, finish, used_time = 0;    //실행 시간 측정을 위한 변수

//합병정렬
void merge(int list[], int left, int mid, int right)
{
	int i, j, k, l;
	i = left, j = mid + 1; k = left;

	while (i <= mid && j <= right)
	{
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else
			sorted[k++] = list[j++];
	}

	if (i > mid)
		for (l = j; l <= right; l++)
			sorted[k++] = list[l];
	else
		for (l = i; l <= right; l++)
			sorted[k++] = list[l];

	for (l = left; l <= right; l++)
		list[l] = sorted[l];
}
void merge_sort(int list[], int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

//퀵정렬
int partition(int list[], int left, int right)
{
	int pivot = list[left], tmp, low = left, high = right + 1;

	do {
		do
			low++;
		while (low <= right && list[low] < pivot);

		do
			high--;
		while (high >= left && list[high] > pivot);
		if (low < high) SWAP(list[low], list[high], tmp);
	} while (low < high);

	SWAP(list[left], list[high], tmp);
	return high;
}
void quick_sort(int list[], int left, int right)
{
	if (left < right)
	{
		int q = partition(list, left, right);
		quick_sort(list, left, q - 1);
		quick_sort(list, q + 1, right);
	}
}

//버블 정렬
void bubble_sort(int list[], int n)
{
	int i, j, tmp;
	printf("버블 정렬 중... ");
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
			if (list[j] > list[j + 1])
				SWAP(list[j], list[j + 1], tmp);
	}
}

//선택 정렬
void selection_sort(int list[], int n)
{
	int i, j, least, tmp;

	printf("선택 정렬 중... ");
	for (i = 0; i < n - 1; i++)
	{
		least = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[least]) least = j;
		SWAP(list[i], list[least], tmp);
	}
}

//삽입 정렬
void insertion_sort(int list[], int n)
{
	int i, j, key;
	printf("삽입 정렬 중... ");
	for (i = 1; i < n; i++)
	{
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j];
		list[j + 1] = key;
	}
}

//원본 배열을 복사하는 함수
void CopyArr(void)
{
	int i;
	for (i = 0; i < n; i++)
		list[i] = original[i];
}

//실행 시간을 측정 및 출력하는 함수
void CalcTime(void)
{
	used_time = finish - start;
	printf("완료!\n소요 시간 : %f sec\n\n", (float)used_time / CLOCKS_PER_SEC);
}


void main()
{
	int i;
	srand((unsigned int)time(NULL));
	n = MAX_SIZE;
	for (i = 0; i < n; i++)
		original[i] = rand();

	printf("데이터의 개수 : %d\n\n", n);

	CopyArr();
	start = clock();
	selection_sort(list, n);
	finish = clock();
	CalcTime();

	CopyArr();
	start = clock();
	insertion_sort(list, n);
	finish = clock();
	CalcTime();

	CopyArr();
	start = clock();
	bubble_sort(list, n);
	finish = clock();
	CalcTime();

	CopyArr();
	start = clock();
	printf("합병 정렬 중... ");
	merge_sort(list, 0, n);
	finish = clock();
	CalcTime();

	CopyArr();
	start = clock();
	printf("퀵 정렬 중... ");
	quick_sort(list, 0, n);
	finish = clock();
	CalcTime();
}

//https://coding-factory.tistory.com/138

