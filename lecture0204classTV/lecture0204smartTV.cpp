#include<iostream>
#include<string>
using namespace std;

class TV
{
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};

class WideTV :public TV
{
	bool videoIn;
public:
	WideTV(int size, bool VideoIn) :TV(size) { this->videoIn = videoIn; }
	bool getVideoIn() { return videoIn; }
};

class SmartTV :public WideTV
{
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) :WideTV(size, true) { this->ipAddr = ipAddr; }
	string getIpAddr() { return ipAddr; }
};

int main()
{
	SmartTV htv("192.0.0.1", 32);
	cout << "size= " << htv.getSize() << endl;
	cout << "videoIn= " << boolalpha << htv.getVideoIn() << endl;
	//boolAlpha는 숫자값을 true, Flase로 출력시키는 조작자
	cout << "IP= " << htv.getIpAddr() << endl;
}