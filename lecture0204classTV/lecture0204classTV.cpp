#include <iostream>
#include <cstring>
using namespace std;

class Tv {
private:
	int channel;
	int volume;
public:
	Tv() { // TV를 켰을 때
		cout << "TV On!" << endl;
		init(0, 3);
	}
	void init(int c, int v) { // 채널을 0, 볼륨을 3으로 초기화 시킨다.
		channel = c;
		volume = v;
	}
	void channelUp() { // 채널이 0~100까지 있을 때 채널 100에서 올리면 다시 채널 0으로 간다.
		cout << "Channel Up!" << endl << endl;
		channel++;
		channel %= 101;
	}
	void channelDown() { // 채널 0에서 내리면 채널 100으로 간다.
		cout << "Channel Down!" << endl << endl;
		if (channel == 0)
			channel = 100;
		else
			channel--;
	}
	void volumeUp() { // 볼륨은 0~10까지 가능하고 10에서 올리면 더이상 올라가지 않는다.
		cout << "Volume Up!" << endl << endl;
		if (volume < 10)
			volume++;
	}
	void volumeDown() { // 볼륨을 0에서 내려도 더이상 내려가지 않는다.
		cout << "Volume Down!" << endl << endl;
		if (volume > 0)
			volume--;
	}
	void getChannel(int c) { // 숫자를 입력하면 그 채널로 이동한다.
		if (c > 0 && c < 101) {
			channel = c;
			cout << "채널 " << c << "로 이동했습니다." << endl << endl;
		}
		else {
			cout << "잘못된 채널 입력" << endl;
		}
	}
	void show_info() { // 채널과 볼륨을 출력해준다.
		cout << "채널: " << channel << ", 볼륨: " << volume << endl << endl;
	}
};


void main() {
	Tv* t = new Tv();
	int menu,ch,exit=0;
	while (!exit) {
		cout << "1: 채널 ▲ \t2: 채널 ▼ \t3: 채널 선택 " << endl;
		cout << "4: 볼륨 ▲ \t5: 볼륨 ▼ \t6: 확인 ◎  \t7: 종료" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			t->channelUp();
			break;
		case 2:
			t->channelDown();
			break;
		case 3:
			cout << "Input Channel (0-100): ";
			cin >> ch;
			t->getChannel(ch);
			break;
		case 4:
			t->volumeUp();
			break;
		case 5:
			t->volumeDown();
			break;
		case 6:
			t->show_info();
			break;
		case 7:
			exit = 1;
			break;

		}
	}
}