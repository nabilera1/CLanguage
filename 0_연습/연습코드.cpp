#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;;
//int dp[1005];
int a[1005];
vector<int> tb;//table
int main()
{
	tb.push_back(0);
	tb.push_back(1);
	tb.push_back(2);
	vector<int> iter=tb;
	//n = tb.begin();
	cout << tb.begin() - tb.end();
	cout << *iter;
}