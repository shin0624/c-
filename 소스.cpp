#include <iostream>
using namespace std;

#include "���.h"

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	StructCircle waffle(3);
	cout << "������ " << waffle.getArea();
}//����ü�� Ŭ������ ������ ����̳�, ����ü�� �⺻�� public, Ŭ������ �⺻�� private