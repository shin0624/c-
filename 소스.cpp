#include <iostream>
using namespace std;

#include "헤더.h"

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	cout << "width";
	cin >> rect.width;
	
	cout << "height";
	cin >> rect.height;

	
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}