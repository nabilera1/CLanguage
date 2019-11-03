#include <iostream>
#include <string>
using namespace std;
int main()
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;
	cout << song + " 를 부른 가수는";
	cout << "Hint : " << elvis[0] << "?"<<endl;
	getline(cin, singer);
	if (singer == elvis)
		cout << "Correct" << endl;
	else
		cout << "Wrong" << endl;

	return 0;
}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	std::cout << "Hello, world!" << std::endl;
//	return 0;
//}


//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	cout << "Hello, world!\n";
//	cout << "Hello, world!"<<endl;
//	return 0;
//}
//
//#include<string>
//int main()
//{
//	string str("Hello World");
//
//	cout << str << ".\n";
//	return 0;
//}

//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//void TestWide()
//{
//	int i = 0;
//	wcout << L"Enter a number(L): ";
//	wcin >> i;
//	wcout << "wcout="<<i<<endl;
//	cout << "cout="<<i<<endl;
//	wcerr << L"test for wcerr" << endl;
//	wclog << L"test for wclog" << endl;
//}
//
//int main()
//{
//	int i = 0;
//	cout << "Enter a number: ";
//	cin >> i;
//	wcout << "wcout=" << i << endl;
//	cout << "cout=" << i << endl;
//	cerr << "test for cerr" << endl;
//	clog << "test for clog" << endl;
//	TestWide();
//}