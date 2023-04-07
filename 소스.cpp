#include <iostream>
using namespace std;

#include "헤더.h"

double StructCircle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	StructCircle waffle(3);
	cout << "면적은 " << waffle.getArea();
}//구조체나 클래스나 동일한 기능이나, 구조체는 기본이 public, 클래스는 기본이 private