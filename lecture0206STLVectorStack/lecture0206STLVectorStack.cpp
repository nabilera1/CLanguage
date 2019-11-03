#include <iostream>
#include <vector>
using namespace std;
int pop(vector<int>& v) {
	if (v.size() > 0) {
		int t = v[v.size() - 1];//스택 top
		v.pop_back();
		return t;
	}
	else {
		cout << "오류 스택이 비었습니다." << endl;
		return -1;
	}
}
void push(vector<int>& v, int value) {
	v.push_back(value); 	
	cout << value << "를 넣었습니다.";
}
int main() {
	int i, num; 	
	vector<int> v;

	while (true) {
		cout << "[1]push     [2]pop      [3]print     [4]exit" << endl;
		cin >> num;
		cout << "-----------------------" << endl;
		switch (num) {
		case 1:
			cout << "값을 입력해주세요 : ";
			cin >> i;
			push(v, i);
			cout << endl;
			break;
		case 2:
			if (v.size() > 0)
				cout << pop(v) << "를 꺼냈습니다." << endl;
			break;
		case 3:
			for (int j = 0; j < v.size(); j++) 
				cout << v[j] << endl;
			break;
		default:
			return 0;
		}
		cout << "-----------------------" << endl;
	}
}