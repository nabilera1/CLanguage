#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>

#ifdef IN
#undef IN
#endif

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

static int count = -1;

typedef struct pyo
{
	int bunho; //수험번호
	int p_jumsu; //필기점수
	int c_jumsu;  //체력점수
	int m_jumsu;  //면접점수
	int tot;   //총점
	char* panjung; //판정
}IN[5];

void display()
{
	gotoxy(5, 5); printf("수험번호 :\n");
	gotoxy(5, 6); printf("필기시험점수 :\n");
	gotoxy(5, 7); printf("체력시험점수 :\n");
	gotoxy(5, 8); printf("면접시험점수 :\n");
	gotoxy(40, 20); printf("[입력:1][출력:2]\n");
}

void input()
{
	count++;
	do
	{
		gotoxy(22, 5); clreol();
		scanf("%d", &IN[count].bunho);//정수 한자리 입력
	} while (IN[count].bunho > 9);

	do
	{
		gotoxy(22, 6); clreol();
		scanf("%d", &IN[count].p_jumsu);
	} while (IN[count].p_jumsu < 0 || IN[count].p_jumsu>100);

	do
	{
		gotoxy(22, 6); clreol();
		scanf("%d", &IN[count].p_jumsu);
	} while (IN[count].p_jumsu < 0 || IN[count].p_jumsu>100);

	do
	{
		gotoxy(22, 7); clreol();
		scanf("%d", &IN[count].c_jumsu);
	} while (IN[count].c_jumsu < 0 || IN[count].c_jumsu>100);

	do
	{
		gotoxy(22, 8); clreol();
		scanf("%d", &IN[count].m_jumsu);
	} while (IN[count].m_jumsu < 0 || IN[count].m_jumsu>100);


	gotoxy(21, 5); clreol();
	gotoxy(21, 6); clreol();
	gotoxy(21, 7); clreol();
	gotoxy(21, 8); clreol();
	gotoxy(58, 20); clreol();
}

void pro()
{
	IN[count].tot = IN[count].p_jumsu + IN[count].c_jumsu + IN[count].m_jumsu;
	if (IN[count].tot >= 200)
		IN[count].panjung = "Pass";
	else
		IN[count].panjung = "Fail";

	IN[count].panjung = (IN[count].p_jumsu > 60 && IN[count].c_jumsu > 60 && IN[count].m_jumsu > 60) ? "Pass" : "Fail";
}

void output()
{
	struct pyo temp;
	int i, j;
	clrscr();
	gotoxy(5, 1); printf("비번호 : 1234\n");
	gotoxy(5, 3); printf(" 번호 필기 체력 면접 총점 판정 \n");
	gotoxy(5, 17); printf("입력자료\n");
	for (i = 0; i <= count; i++)
	{
		gotoxy(5, 18 + i);
		printf("%3d %3d %3d %3d\n", IN[i].bunho, IN[i].p_jumsu, IN[i].c_jumsu, IN[i].m_jumsu);
	}

	for (i = 0; i < count; i++)
	{
		for (j = i; j <= count; j++)
		{
			if (IN[i].bunho > IN[j].bunho)
			{
				temp = IN[i];
				IN[i] = IN[j];
				IN[j] = temp;
			}
		}
	}

	for (i = 0; i <= count; i++)
	{
		gotoxy(5, 5 + i);
		printf("%5d %7d %7d %7d %7d %10s\n", IN[i].bunho, IN[i].p_jumsu, IN[i].c_jumsu, IN[i].m_jumsu, IN[i].tot, IN[i].panjung);
	}
}

int main(void)
{
	char ch;
	clrscr();
	display();
	do
	{
		gotoxy(59, 20);
		ch = getchar();
		if (ch == '1')
		{
			input();
			pro();
		}
		else if (ch == '2')
		{
			output();
			exit(1);
		}

		if (cout >= 4)
		{
			gotoxy(45, 22);
			printf("최대 레코드 수는 5개입니다.");
			gotoxy(58, 20);
			ch = getche();
			output();
			exit(1);
		}
	} while (1);
}
