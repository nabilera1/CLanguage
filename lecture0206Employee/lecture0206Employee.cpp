#include <iostream>
#include <cstring>
#include "Employee.h"
using namespace std;



Employee::Employee()
{
	strName = NULL;  //**  nullptr
	strAddr = NULL;
}

Employee::Employee(char* pName, char* pAddr)
{
	cout << endl;
	cout << "Employee(pName, pAddr)" << endl;
	strName = new char[strlen(pName) + 1]; //** strlen(pName)+1
	strAddr = new char[strlen(pAddr) + 1];
	strName = pName;
	strAddr = pAddr;
}

Employee ::~Employee()
{

}

void Employee::DisplayEmployee()
{
	cout << "이름:" << strName << endl;
	cout << "주소:" << strAddr << endl << endl;
}

Regular::Regular()
{

}

Regular::Regular(char* pName, char* pAddr, double dSalary)
{
	cout << "Regular 인자가 3개인 생성자 호출" << endl;
	strName = pName;
	strAddr = pAddr;
	salary = dSalary;
	cout << "이름:" << strName << endl;
	cout << "주소:" << strAddr << endl;
}

Regular ::~Regular()
{

}


double Regular::PayCheck() const
{
	return salary;
}

Temporary::Temporary()
{

}


Temporary::Temporary(char* pName, char* pAddr, double dDailyPayCheck, int nDays)
{
	cout << "Temporary 인자가 4개인 생성자 호출" << endl;
	strName = pName;
	strAddr = pAddr;
	dailyPayCheck = dDailyPayCheck;
	days = nDays;
	cout << "이름:" << pName << endl;
	cout << "주소:" << pAddr << endl;
}

Temporary ::~Temporary()
{

}

double Temporary::PayCheck() const
{
	return dailyPayCheck * days;
}

int main()
{
	Employee emp("David", "State of Oregon");
	emp.DisplayEmployee();

	Regular rgl("Kim", "Kimhae", 300);
	cout << "급여:" << rgl.PayCheck() << endl << endl;

	Temporary tmp("Joe", "Seoul", 10, 20);
	cout << "급여:" << tmp.PayCheck() << endl << endl;
	return 0;
}
