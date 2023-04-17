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
	cout << "생성하고자 하는 원의 개수 = ";//원의 개수 입력받음
	int num, radius;
	cin >> num;
	if (num <= 0) return 0;
	Circle *pArray = new Circle[num];

	for (int i = 0; i < num; i++)//원 반지름 값 입력받음
	{
		cout << "원 " << i + 1 << " : ";
		cin >> radius;
		pArray[i].setRadius(radius);//입력받은 원의 반지름을 각각의 배열에 radius값으로 저장
	}
	//조건에 맞는 원의 개수를 출력하기 위해 카운트 변수를 선언
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < num; i++)
	{
		cout << p->getArea() << " ";//원의 면적 출력
		if (p->getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	cout << endl << "면적이 100 이상 200 이하인 원의 개수는 " << count << endl;
	delete[] pArray;//객체 배열 소멸
}