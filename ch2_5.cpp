#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char array[100]; 
	int ea_x = 0; //문자열 내 x의 개수
	cout << "문자들을 입력하라(100개미만).\n";
	cin.getline(array, 100);
	for (int i = 0; i < strlen(array); i++)// 문자열 내 원소 개수 반복 
	{
		if (array[i] == 'x')//입력된 문자 중 x가 있을 경우 개수를 카운트
		{
			ea_x++;
		}
	}
	cout << "x의 개수는 " << ea_x << endl; //x의 개수 출력

	return 0;
}