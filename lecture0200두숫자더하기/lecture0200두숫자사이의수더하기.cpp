//2개의 숫자를 입력받아
//그 숫자 사의 숫자들의 합을 구하는 프로그램을 작성하시오.
//예
//두 개의 숫자입력 : 5 6
//두 수 사이의 정수 합 : 0

//두 개의 숫자입력: 3 7
//두 수 사이의 정수 합 : 15



#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}