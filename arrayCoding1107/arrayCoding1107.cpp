﻿//정수 배열이 주어졌을 때, 
//짝수 위치의 원소가 양 옆의 원소보다 큰 수가 되도록 배치하시오.
//
//배열에는 중복 원소가 없다고 가정합니다.
//  Input:   [1, 2, 3, 4, 5, 6, 7]
//	Output : [1, 3, 2, 5, 4, 7, 6]
//
//	Input :  [9, 6, 8, 3, 7]
//	Output : [6, 9, 3, 8, 7]
//
//	Input :  [6, 9, 2, 5, 1, 4]
//	Output : [6, 9, 2, 5, 1, 4]
//

#include<stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };

	//(i%2) return max(arr[i-1], arr[i], arr[i+1])
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{

	}


}