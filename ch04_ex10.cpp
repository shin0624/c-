#include<iostream>
#include "ex10.h"
using namespace std;

Circle::Circle() {
	radius = 1;
}

Circle::Circle(int r) {

}

Circle::~Circle() {

}

int main() {
	cout << "�����ϰ��� �ϴ� ���� ���� = ";//���� ���� �Է¹���
	int num, radius;
	cin >> num;
	if (num <= 0) return 0;
	Circle *pArray = new Circle[num];

	for (int i = 0; i < num; i++)//�� ������ �� �Է¹���
	{
		cout << "�� " << i + 1 << " : ";
		cin >> radius;
		pArray[i].setRadius(radius);//�Է¹��� ���� �������� ������ �迭�� radius������ ����
	}
	//���ǿ� �´� ���� ������ ����ϱ� ���� ī��Ʈ ������ ����
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < num; i++)
	{
		cout << p->getArea() << " ";//���� ���� ���
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "������ 100 �̻� 200 ������ ���� ������ " << count << endl;
	delete[] pArray;//��ü �迭 �Ҹ�
}