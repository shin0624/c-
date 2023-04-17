#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;

	cout << "7+23+434+33와 같이 덧셈문자열을 입력하세요." << endl;
	getline(cin, s, '\n');//문자열 입력

	int sum = 0;
	int startIndex = 0;//문자열 내에 검색할 시작 인덱스
	while (true) {
		int fIndex = s.find('+', startIndex);// s에서, startIndex(0)부터  + 문자를 검색하여 findex에 넣는다.
		if (fIndex == -1)//+문자를 발견할 수 없다면
		{
			string part = s.substr(startIndex);//part 스트링을 선언 후 startindex를 발췌하여 넣는다.
			if (part == "")break;//+로 끝나는 경우 
			cout << part << endl;
			sum += stoi(part);//문자열을 수로 변환하여 더하기
			break;
		}
		int count = fIndex - startIndex;//서브스트링으로 자를 문자 개수. 
		string part = s.substr(startIndex, count);//startIndex부터, count개의 문자를 서브스트링 하여 part에 삽입

		cout << part << endl;

		sum += stoi(part);//문자열을 수로 변환하여 더하기
		startIndex = fIndex + 1;//검색을 시작할 인덱스 전진
	}
	cout << "숫자들의 합은 " << sum <<  endl;

}