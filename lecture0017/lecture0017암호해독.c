/*
 * --------------------
 *      암호 해독     *
 * --------------------
 */

#include <stdio.h>

int main(void)
{
	static char table[] = { 'Q','W','E','R','T','Y','U','I','O','P',
						 'A','S','D','F','G','H','J','K','L','Z',
						 'X','C','V','B','N','M','?' };

	char* p, * pass = "KSOIDHEPZ";
	int index;

	p = pass;
	while (*p != '\0') {
		if ('A' <= *p && *p <= 'Z')
			index = *p - 'A';
		else
			index = 26;
		putchar(table[index]);
		p++;
	}
	printf("\n");

	return 0;
}
