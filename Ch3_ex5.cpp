#include <iostream>
using namespace std;

#include "pointheader.h"

Point::Point() : Point(0, 0) {}//������ ���ο� �ʱⰪ���� �ʱ�ȭ

Point::Point(int a, int b)
	: x(a), y(b) {}

int main() {
	Point origin;//�Ű����� ���� Point() ȣ��
	Point target(10, 20);
	origin.show();
	target.show();

}