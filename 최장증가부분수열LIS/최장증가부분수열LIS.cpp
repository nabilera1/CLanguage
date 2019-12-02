// 최장증가부분수열LIS.cpp : 
// 이분 검색 활용법
// 새로운 배열 추가하여 갱신해 나감.
//예) 5
//    1 4 2 3 5 의 결과는 4가 된다.
//5
//1 4 2 3 5
//1235
//4
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
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	//tb.push_back(0);
	for (int i = 0; i < n; i++) {
		//lower_bound는 찾고자 하는 값 이상이 처음 나오는 위치
		int idx = lower_bound(tb.begin(), tb.end(), a[i]) - tb.begin();
		/*cout << "idx : " << idx;
		cout << endl;*/
		if (idx == tb.size())
			tb.push_back(a[i]);
		else
			tb[idx] = a[i];
	}
	for (int i = 0; i <tb.size(); i++) {
		cout << tb[i];
	}
	cout << endl;
	//cout << tb.size() - 1;
	cout << tb.size();
	return 0;

}

//lower_bound https://12bme.tistory.com/120
//http://www.cplusplus.com/reference/algorithm/lower_bound/

