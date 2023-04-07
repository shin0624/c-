#include <iostream>
using namespace std;
#include"헤더.h"

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << "인 원 생성" << endl;
}
Circle::~Circle() {//소멸자 구현
	cout << "반지름 " << radius << "인 원 소멸" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);//전역객체 생성(함수 바깥)
Circle globalPizza(2000);//전역객체 생성(함수 바깥)

void f() {
	Circle fDonut(100);//지역객체 선언(함수 내)
	Circle fPizza(200);//지역객체 선언(함수 내)
}
int main() {
	Circle mainDonut;//지역객체 선언(함수 내)
	Circle mainPizza(30);//지역객체 선언(함수 내)
	f();
	//globalDonut, globalPizza -->mainDonut, mainPizza --> fDonut, fPizza 순으로 생성, 역순으로 소멸

}
