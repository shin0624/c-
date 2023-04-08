#include <iostream>
using namespace std;
#include "ex7.h"

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::~Circle() {
	
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	int radius;
	while (true) {
		cout << "���� ������ �Է�(������ ����)>> ";
		cin >> radius;

		if (radius < 0) break;//������ �Ǹ� �Է� ����
		Circle* p = new Circle(radius);//���� ��ü ����
		cout << "���� ������ " << p->getArea() << endl;
		delete p;//��ü ��ȯ. delete���� ���ٸ� �޸� ���� �߻�
	}
}