#include <iostream>
using namespace std;

#include "���.h"

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	cout << "width";
	cin >> rect.width;
	
	cout << "height";
	cin >> rect.height;

	
	cout << "�簢���� ������ " << rect.getArea() << endl;
}