#include <iostream>

using namespace std;

int main() {
	cout << "주소를 입력하세요 : ";
	char address[100];
	cin.getline(address, 100);//공백문자도 문자열로 입력 가능

	cout << "주소는 " << address << " 입니다.\n";
	}

