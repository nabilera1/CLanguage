#include<stdio.h>


int main()
{
	FILE* fp='\0';
	errno_t err;
	char ch;
	err=fopen_s(&fp,"test.c", "r");
	if (err) return 0;

	while ((ch = getc(fp)) != EOF)
		putc(ch, stdout);


	err=fclose(fp);
	if (err) return 0;
}