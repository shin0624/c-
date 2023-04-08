#include <iostream>
using namespace std;
#include "ex7.h"

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "정수 반지름 입력(음수면 종료)>> ";
		cin >> radius;

		if (radius < 0) break;//음수가 되면 입력 종료
		Circle* p = new Circle(radius);//동적 객체 생성
		cout << "원의 면적은 " << p->getArea() << endl;
		delete p;//객체 반환. delete문이 없다면 메모리 누수 발생
	}
}