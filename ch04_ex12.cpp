#include<iostream>
#include<string>
using namespace std;

int main() {
	string names[5]; //string 배열 선언

	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');//getline함수로 공백 표기가 가능한 문자열을 입력받는다.
	}
	string latter = names[0];
	for (int i = 0; i < 5; i++)
	{
		if(latter<names[i]){//names[i]가 latter보다 뒤에 온다면
			latter = names[i];//latter문자열 변경.(latter  >  names[i]이면 사전 가장 앞에 나오는 것을 출력하도록 바뀜
		}

	}
	cout << "사전에서 가장 뒤에 나오는 문자열은  " << latter << endl;
}