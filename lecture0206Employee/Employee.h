#pragma once
class Employee
{
public:
	Employee();
	Employee(char* pName, char* pAddr);  //char* --> string
	~Employee();
	void DisplayEmployee();
protected:
	//private:
	char* strName;
	char* strAddr;
};

class Regular : public Employee
{
public:
	Regular();
	Regular(char* pName, char* pAddr, double dSalary);
	~Regular();
	double PayCheck() const;
private:
	double salary;
};

class Temporary : public Employee
{
public:
	Temporary();
	Temporary(char* pName, char* pAddr, double dSalary, int ndays);
	~Temporary();
	double PayCheck() const;
private:
	double dailyPayCheck;
	int days;
};