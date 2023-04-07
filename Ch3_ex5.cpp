#include <iostream>
using namespace std;

#include "pointheader.h"

Point::Point() : Point(0, 0) {}//생성자 서두에 초기값으로 초기화

Point::Point(int a, int b)
	: x(a), y(b) {}

int main() {
	Point origin;//매개변수 없는 Point() 호출
	Point target(10, 20);
	origin.show();
	target.show();

}