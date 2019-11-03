#include<stdio.h>

int main()
{
	FILE* fp, * fp1;
	errno_t err, err1;
	char ch;
	err = fopen_s(&fp, "test.txt", "r");
	err1 = fopen_s(&fp1, "result.txt", "w");
	if (err) return 0;

	while ((ch = getc(fp)) != EOF)
		fputc(ch, fp1);

	err = _fcloseall();
	if (err) return 0;
}