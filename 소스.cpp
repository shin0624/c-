#include <iostream>
using namespace std;
#include"���.h"

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << "�� �� ����" << endl;
}
Circle::~Circle() {//�Ҹ��� ����
	cout << "������ " << radius << "�� �� �Ҹ�" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

Circle globalDonut(1000);//������ü ����(�Լ� �ٱ�)
Circle globalPizza(2000);//������ü ����(�Լ� �ٱ�)

void f() {
	Circle fDonut(100);//������ü ����(�Լ� ��)
	Circle fPizza(200);//������ü ����(�Լ� ��)
}
int main() {
	Circle mainDonut;//������ü ����(�Լ� ��)
	Circle mainPizza(30);//������ü ����(�Լ� ��)
	f();
	//globalDonut, globalPizza -->mainDonut, mainPizza --> fDonut, fPizza ������ ����, �������� �Ҹ�

}
