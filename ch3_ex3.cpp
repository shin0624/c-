#include <iostream>
using namespace std;

#include "Circle_ss.h"

Circle::Circle() {
	radius = 1;
	cout << "�������� " << radius << "�� �� ���� " << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "�������� " << radius << "�� �� ���� " << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; //�Ű����� ���� ������ ȣ��
	double area = donut.getArea();
	cout << "donut ������  " << area << endl;

	Circle pizza(30);//�Ű����� �ִ� ������ ȣ��. 30�� r�� ���޵�
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;
}