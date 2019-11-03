

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int    S1_No, S2_No, S3_No;     // 학번
	int    S1_Kor, S2_Kor, S3_Kor;    // 국어 점수
	int    S1_Math, S2_Math, S3_Math;   // 수학 점수 
	int    S1_Eng, S2_Eng, S3_Eng;    // 영어 점수 
	float  S1_Ave, S2_Ave, S3_Ave;    // 개인 평균
	float  TotalAve = 0.0f;              // 전체 평균 

	int    NumberOfStudent = 0;             // 현재까지 입력된 학생수 



	while (1)
	{
		cout << "    -------------메 뉴-------------" << endl;
		cout << "     1. 학생 성적 추가" << endl;
		cout << "     2. 전체 성적 보기" << endl;
		cout << "     Q. 프로그램 종료 " << endl;
		cout << "    -------------------------------" << endl;

		cout << "    메 뉴의 번호를 입력하세요 : ";

		char select;  // 메뉴 번호를 위한 char변수 
		cin >> select;

		switch (select)
		{

			/* 성적 추가 case */
		case '1':
		{
			if (NumberOfStudent==3)
			{
				cout << "\n더이상 입력할수 없습니다.\n";
				cout << "다른메뉴를 선택해 주세요 \n\n";
				continue;
			}

			int Kor, Eng, Math;

			cout << endl;
			cout << '[' << NumberOfStudent + 1 << "] 번째 학생의 " << "국어, 영어, 수학점수를 입력해 주세요 : ";
			cin >> Kor >> Eng >> Math;

			float Ave = float(Kor + Eng + Math) / 3.0f;      // 개인 평균 


			if (NumberOfStudent==0)
			{
				S1_No = NumberOfStudent + 1;
				S1_Kor = Kor;
				S1_Eng = Eng;
				S1_Math = Math;
				S1_Ave = Ave;

				TotalAve = S1_Ave;
			}
			else if (NumberOfStudent==1)
			{
				S2_No = NumberOfStudent + 1;
				S2_Kor = Kor;
				S2_Eng = Eng;
				S2_Math = Math;
				S2_Ave = Ave;

				TotalAve = (S1_Ave + S2_Ave) / 2;
			}
			else
			{
				S3_No = NumberOfStudent + 1;
				S3_Kor = Kor;
				S3_Eng = Eng;
				S3_Math = Math;
				S3_Ave = Ave;

				TotalAve = (S1_Ave + S2_Ave + S3_Ave) / 3;
			}


			NumberOfStudent++;

			cout << '[' << NumberOfStudent << "] 번째 학생의 성적이 입력 되었습니다\n\n\n";

			break;



		}


		/* 성적 보기 case */
		case '2':
		{

			cout.precision(2);    // 실수 출력시 소수점 이하 두자리만 출력 
			cout << fixed;        // 실수 출력시 소수점 이하 두자리만 출력 

			cout << "\n\n      < 전체 성적보기 >\n\n";
			cout << "      학번  국어  영어  수학    평균 \n";

			int iCnt;

			for (iCnt = 1; iCnt <= NumberOfStudent; ++iCnt)
			{

				if (1 == iCnt)
				{
					cout << setw(7) << '[' << S1_No << ']' << setw(7) << S1_Kor << setw(6) << S1_Eng << setw(6) << S1_Math << setw(8) << S1_Ave << endl;
				}
				if (2 == iCnt)
				{
					cout << setw(7) << '[' << S2_No << ']' << setw(7) << S2_Kor << setw(6) << S2_Eng << setw(6) << S2_Math << setw(8) << S2_Ave << endl;
				}
				if (3 == iCnt)
				{
					cout << setw(7) << '[' << S3_No << ']' << setw(7) << S3_Kor << setw(6) << S3_Eng << setw(6) << S3_Math << setw(8) << S3_Ave << endl;
				}
			}

			cout << '\n' << setw(27) << "전체 평균 = " << TotalAve << endl;


		}


		/* 종료 case */
		case 'Q':
		{
			cout << "\n      ****프로그램을 종료 합니다.****\n" << endl;
			return 0;
		}


		/* 잘못입력 case */
		default:
		{
			cout << "\n잘못된 입력입니다. 다시입력 해주세요.\n" << endl;
			break;
		}
		}

	}
	return 0;
}

