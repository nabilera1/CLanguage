//문제

/*
숫자 12300을 입력받으면 거꾸로 출력하는 프로그램을 작성하시오.
입력 : 12300
출력 : 321

*/



#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
//stirng reverse와 숫자 12300을 321로 만드는 프로그램
int main()
{
	string s;
	int n;
	
	getline(cin, s);    //12300
	reverse(s.begin(), s.end());  //00321
	stringstream(s) >> n;  //321
	cout <<n<< endl;  //321
	//cout << s;
	return 0;
}