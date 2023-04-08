#include <iostream>
using namespace std;
#include"pointer1.h"

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << endl;//객체이름으로 멤버접근

	Circle* p;//객체 포인터로 멤버접근
	p = &donut;// p에 donut 객체의 주소를 저장
	cout << p->getArea() << endl;// donut의 getArea()를 호출
	cout << (*p).getArea() << endl;// donut의 getArea()를 호출

	p = &pizza;
	cout << p->getArea() << endl;// pizza의 getArea()를 호출
	cout << (*p).getArea() << endl;//pizza의 getArea()를 호출
}