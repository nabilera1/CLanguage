#include<stdio.h>
#define Node 4 //VERTEX
#define EDGE 6
#define Start 1
int a[Node + 1][Node + 1] = 
{ {0,0,0,0,0},{0,0,1,0,1},{0,1,0,1,2},{0,0,1,0,1}, {0,1,2,1,0} };
int success, path[EDGE + 1], n; //성공여부, 지나간 간선 저장, 통과한 간선의 수
void visit(int);
int main(void) {
	success = 0; n = EDGE;
	visit(Start);
	if (success == 0)
		printf("해가 없음\n");
	return 0;
}
void visit(int i) {
	int j; path[n] = i;
	if (n == 0 && i == Start) {
		printf("해 %d:", ++success);
		for (i = 0; i <= EDGE; i++)
			printf("%d", path[i]);
		printf("\n");
	}
	else {
		for (j = 1; j <= Node; j++)
			if (a[i][j] != 0) {//간선 존재 여부
				a[i][j]--; a[j][i]--;
				n--;
				visit(j);
				a[i][j]++; a[j][i]++;
				n++;
			}
	}
}