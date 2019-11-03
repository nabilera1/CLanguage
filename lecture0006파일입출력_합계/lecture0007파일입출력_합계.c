#include<stdio.h>

int main()
{
	FILE* fp1, * fp2;
	errno_t err;
	int num=0,sum=0;
	err = fopen_s(&fp1, "input.txt", "w");
	if (err) return 0;

	fprintf(fp1, "%d", 100);
	err = fclose(fp1);
	if (err) return 0;

	err = fopen_s(&fp1, "input.txt", "r");
	if (err) return 0;
	fscanf_s(fp1, "%d", &num);

	for (int i = 0; i <= num; i++)
	{
		sum += i;
	}
	err = fopen_s(&fp2, "output.txt", "w");
	if (err) return 0;
	

	fprintf(fp2, "%d", sum);


	err = _fcloseall();
	if (err) return 0;
}