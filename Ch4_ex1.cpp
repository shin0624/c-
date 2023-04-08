#include <iostream>
using namespace std;
#include"pointer1.h"

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	Circle pizza(30);

	cout << donut.getArea() << endl;//��ü�̸����� �������

	Circle* p;//��ü �����ͷ� �������
	p = &donut;// p�� donut ��ü�� �ּҸ� ����
	cout << p->getArea() << endl;// donut�� getArea()�� ȣ��
	cout << (*p).getArea() << endl;// donut�� getArea()�� ȣ��

	p = &pizza;
	cout << p->getArea() << endl;// pizza�� getArea()�� ȣ��
	cout << (*p).getArea() << endl;//pizza�� getArea()�� ȣ��
}