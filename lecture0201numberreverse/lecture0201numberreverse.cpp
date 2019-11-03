#include <iostream>  
using namespace std;
int main()
{
	int n, reverse = 0, rem;
	cout << "숫자 입력: ";
	cin >> n;
	while (n != 0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	cout << "거꾸로 숫자 출력 : " << reverse << endl;
	return 0;
}