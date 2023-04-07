#include <iostream>
using namespace std;

#include "Circle_ss.h"

Circle::Circle() {
	radius = 1;
	cout << "반지름이 " << radius << "인 원 생성 " << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름이 " << radius << "인 원 생성 " << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //매개변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은  " << area << endl;

	Circle pizza(30);//매개변수 있는 생성자 호출. 30이 r에 전달됨
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}