#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	char name1[100];
	cin >> name;
	cout << name << name.length() << endl;
	char ch = 5;
	ch=getchar();
	cin.getline(name1, 10, '\n');
	cout << name1 << strlen(name1) << endl;
	system("pause");
	return 0;
}