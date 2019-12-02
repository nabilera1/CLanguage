// 배열0을제외.cpp : 

#include <iostream>
using namespace std;

void reorder(int* A) {
	int k = 0;
	for (int i=0; i < sizeof(A) / sizeof(A[0]);i++) {
		if (i != 0) {
			A[k++] = i;
		}
	}
	for (int i=k; i < sizeof(A) / sizeof(A[0]); i++) {
		A[i] = 0;
	}
}
int main()
{
	int A[] = { 6,0,8,2,3,0,4,0,1 };
	for (int i : A)
		cout << " " << i << "  ";
	cout << endl;
	reorder(A);
	for (int i : A)
		cout << " " << i << " ";
	return 0;
}

