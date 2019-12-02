#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main() {
	ifstream if1;
	ofstream of1;

	int n, m, sum=0;
	if1.open("input.txt");
	of1.open("output.txt");

	if1 >> n >> m;;
	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum = sum + i;
		}
	}
	of1 << sum;
	if1.close();
	of1.close();
	return 0;
}