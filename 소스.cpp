#include <iostream>
using namespace std;

#include "glegle.h"

Rectangle::Rectangle():Rectangle(1) {}//위임생성자

Rectangle::Rectangle(int w, int h) {//타겟생성자
	width = w, height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle::isSquare() {
	if (width == height) return true;//정사각형이면 true를 리턴하는 메서드
	else
		return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}
