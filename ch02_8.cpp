#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int namelength = 0;//입력된 문자열의 길이가 저장될 변수
	char name[100],longname[100]; //이름을 입력받을 문자열과 가장 긴 이름이 들어갈 문자열 생성
	cout << "5명의 이름을 ';'으로 구분하여 입력하세요.\n>> ";

	for (int i = 0; i < 5; i++)//5개의 이름을 입력받도록 루프
	{
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		if (namelength < strlen(name))//입력받은 이름을 namelength에 저장하여 하나하나 길이를 대조
		{
			namelength = strlen(name);//가장 긴 이름이 마지막으로 namelength에 저장될 것.
			strcpy_s(longname, name);//strcpy를 이용해 가장 긴 이름을 longname에 복사한다.
		}
	}
	cout << "가장 긴 이름은 " << longname << endl;
	return 0;

}