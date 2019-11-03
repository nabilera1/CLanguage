// alg_adj_fnd.cpp
// compile with: /EHsc
#include <list>
#include <algorithm>
#include <iostream>

// Returns whether second element is twice the first
bool twice(int elem1, int elem2)
{
	return elem1 * 2 == elem2;
}

int main()
{
	using namespace std;
	list<int> L;
	list<int>::iterator Iter;
	list<int>::iterator result1, result2;

	L.push_back(50);
	L.push_back(40);
	L.push_back(10);
	L.push_back(20);
	L.push_back(20);

	cout << "L = ( ";
	for (Iter = L.begin(); Iter != L.end(); Iter++)
		cout << *Iter << " ";
	cout << ")" << endl;

	result1 = adjacent_find(L.begin(), L.end());
	if (result1 == L.end())
		cout << "There are not two adjacent elements that are equal."
		<< endl;
	else
		cout << "There are two adjacent elements that are equal.\n"
		<< "They have a value of "
		<< *(result1) << "." << endl;

	result2 = adjacent_find(L.begin(), L.end(), twice);
	if (result2 == L.end())
		cout << "There are not two adjacent elements where the "
		<< "second is twice the first." << endl;
	else
	{
		cout << "There are two adjacent elements where "
			<< "the second is twice the first.\n"
			<< "They have values of " << *(result2++)
			<< " & " << *result2 << "." << endl;
	}
}
//오류 발생  10 & 10.  이 아닌 10 & 20. 이 되어야 함.
//L = (50 40 10 20 20)
//There are two adjacent elements that are equal.
//They have a value of 20.
//There are two adjacent elements where the second is twice the first.
//They have values of 10 & 10.

//관련 주소
//https://docs.microsoft.com/ko-kr/cpp/standard-library/algorithm-functions?f1url=https%3A%2F%2Fmsdn.microsoft.com%2Fquery%2Fdev15.query%3FappId%3DDev15IDEF1%26l%3DKO-KR%26k%3Dk(XUTILITY%2Fstd%3A%3Areverse);k(std%3A%3Areverse);k(reverse);k(SolutionItemsProject);k(DevLang-C%2B%2B);k(TargetOS-Windows)%26rd%3Dtrue&view=vs-2019
