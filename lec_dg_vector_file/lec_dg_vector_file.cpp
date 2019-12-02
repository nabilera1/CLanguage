#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main() {
	ifstream if1;
	ofstream of1;
	vector<int> v;
	vector<int>::iterator it;
	int n, t1, t2, t3;
	if1.open("input.txt");
	of1.open("output.txt");
	if1 >> n;

	while (n--) {
		if1 >> t1 >> t2 >> t3 ;
		v.push_back(t1 * t2 * t3);
	}
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << '\n';
		of1 << *it << endl;
	}
	if1.close();
	of1.close();
	return 0;
}