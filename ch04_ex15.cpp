#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');
	cin.ignore();//'&'�ڿ� ������� ����Ű ���� �ڵ�

	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');

	cout << "replace : ";
	getline(cin, r, '\n');

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex);//startindex���� �����Ͽ� f�� �˻��Ѵ�.
		if (fIndex == -1) 
			break;//���� ��ã���� ����
		
		s.replace(fIndex, f.length(), r);//findex���� �����Ͽ� f�� ���̸�ŭ ���ڿ� r�� ��ü�Ѵ�.
		startIndex = fIndex + r.length();

	}
	cout << s << endl;
}