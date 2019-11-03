#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Name {
	string name;
public:
	void setname(string name) {
		this->name = name;

	}
	string getname() {
		return name;
	}
};

class Subject {
	int subsco;
public:

	void setsubsco(int subsco) {
		this->subsco = subsco;
	}
	int getsubsco() {
		return subsco;
	}
};

class Score {
	Name na;
	Subject mat;
	Subject eng;
	Subject kor;
public:
	void setmatsco(int sco) {
		mat.setsubsco(sco);
	}
	int getmatsco() {
		return mat.getsubsco();
	}
	void setengsco(int sco) {
		eng.setsubsco(sco);
	}
	int getengsco() {
		return eng.getsubsco();
	}
	void setkorsco(int sco) {
		kor.setsubsco(sco);
	}
	int getkorsco() {
		return kor.getsubsco();
	}
	void setname(string name) {
		na.setname(name);
	}
	string getname() {
		return na.getname();
	}
	int getsum() {
		return getmatsco() + getengsco() + getkorsco();
	}
	float getavg() {
		return this->getsum() / 3.f;
	}
};

void main() {
	Score* aa;
	int num;
	cout << "몇 명 입력하시겠습니까?";
	cin >> num;
	aa = new Score[num];
	for (int i = 0; i < num; i++) { //성적 입력  num만큼 입력
		string sn;
		cout << i + 1 << "번째 이름을 입력하시오 : ";
		cin >> sn;
		aa[i].setname(sn);
		int sco;
		cout << "국어성적을 입력하시오 : ";
		cin >> sco;
		aa[i].setkorsco(sco);
		cout << "영어성적을 입력하시오 : ";
		cin >> sco;
		aa[i].setengsco(sco);
		cout << "수학성적을 입력하시오 : ";
		cin >> sco;
		aa[i].setmatsco(sco);
	}

	cout << "====================================================================\n";
	cout << "=   이름  ==     국어  ==   영어   ==   수학  ==   총점    == 평균 =\n";
	cout << "====================================================================\n";
	for (int i = 0; i < num; i++) { //성적 출력 num만큼 출력
		cout << "   " << setw(3) << aa[i].getname();
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				cout << setw(11) << aa[i].getkorsco();
			}
			if (j == 1) {
				cout << setw(11) << aa[i].getengsco();
			}
			if (j == 2) {
				cout << setw(12) << aa[i].getmatsco();
			}
		}
		cout << setw(11) << aa[i].getsum();
		cout << setw(11) << aa[i].getavg() << "   " << "\n";
	}
	delete[] aa; //메모리 할당 해제
}
