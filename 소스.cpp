#include <iostream>
using namespace std;

#include "glegle.h"

Rectangle::Rectangle():Rectangle(1) {}//���ӻ�����

Rectangle::Rectangle(int w, int h) {//Ÿ�ٻ�����
	width = w, height = h;
}

Rectangle::Rectangle(int length) {
	width = height = length;
}

bool Rectangle::isSquare() {
	if (width == height) return true;//���簢���̸� true�� �����ϴ� �޼���
	else
		return false;
}

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}
