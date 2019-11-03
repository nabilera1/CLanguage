#include <iostream>
using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	~Circle() {
		cout << "I am dying";
	};
	Circle(int radius);
	double getArea();
};
//Circle::Circle()
//{
//	radius = 1;
//	cout << "기본 반지름 " << radius << "인 원 생성" << endl;
//};
Circle::Circle() :Circle(1) {}
Circle::Circle(int radius)
{
	this->radius = radius;
	cout << "반지름 " << radius << "인 원 생성" << endl;
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}
class Rectangle {
	int width, height;
public:
	Rectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
	}
	double getArea() {
		return (double)width * height;
	}
};
int main()
{
	int n;
	cout << "도넛의 반지름을 입력하세요 : ";
	cin >> n;
	Circle donut(n);
	double area = donut.getArea();
	cout << "donut =" << area << endl;

	cout << "피자의 반지름을 입력하세요 : ";
	cin >> n;
	Circle pizza(n);
	area = pizza.getArea();
	cout << "pizza=" << area << endl;

	int w, h;
	cout << "사각형의 가로 길이, 세로 길이를 입력하세요 :";
	cin >> w >> h;
	Rectangle rect(w,h);
	cout << "Rectangle=" << rect.getArea() << endl;
	return 0;
}
