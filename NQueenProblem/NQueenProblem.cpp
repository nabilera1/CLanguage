//속성-전처리기-_CRT_SECURE_NO_WARNINGS
//2 4 1 3
#include <stdio.h>
#include <stdlib.h>

void queens(int);
int promising(int);
int n;
int col[255] = { 0, };//row, col

//FILE* inputFile, * outputFile;

int main() {
	//char fileName[255];

	printf("How many Queens? ");
	scanf("%d", &n);
	queens(0);
}

void printResult() {
	int i;
	printf("result : ");
	for (i = 1; i <= n; i++) 
		printf("%d ", col[i]);  //열에 퀸의 행 위치 저장
	exit(1);
}//2 4 1 3

void queens(int i) {//i가 0 부터 시작
	int j;

	if (promising(i)) {
		if (i == n) printResult();
		else
			for (j = 1; j <= n; j++) {
				col[i + 1] = j;
				queens(i + 1);
			}
	}
}

int promising(int i) { // 직선, 대각선으로 만나는지 검사
	int k = 1, promising = 1;
	while (k < i && promising) {
		if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i - k))
			promising = 0;
		k++;
	}
	return promising;
	/*
	while (k < i ) {
	if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i - k))
		return 0;
	k++;}
	*/
}

/*
[0] [1] [2] [3] [4]
     2   4   1   3
//////////////////////////
  1 2 3 4
1
2
3
4
///////////////////////////
   1  1  1  1

   1  2  3  4

*/


//출처: https://raisonde.tistory.com/entry/C언어-소스-Backtracking을-이용한-N-Queen-문제-해결법 [지식잡식]