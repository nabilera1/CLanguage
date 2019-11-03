//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i;
//	cout << "Please enter an integer value: ";
//	cin >> i;
//	cout << "The value you entered is " << i;
//	cout << " and its double is " << i * 2 << ".\n";
//	return 0;
//}

#include <iostream>
using namespace std;
int main()
{
	string str;
	
	cin >> str;
	cout <<str << endl;
	cout <<"count : "<<str.length() << endl;
	return 0;
}

// stringstreams
//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main()
//{
//	string mystr;
//	float price = 0;
//	int quantity = 0;
//
//	cout << "Enter price: ";
//	getline(cin, mystr);
//	stringstream(mystr) >> price;
//	cout << "Enter quantity: ";
//	getline(cin, mystr);
//	stringstream(mystr) >> quantity;
//	cout << "Total price: " << price * quantity << endl;
//	return 0;
//}