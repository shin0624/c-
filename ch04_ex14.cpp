#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;

	cout << "7+23+434+33�� ���� �������ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');//���ڿ� �Է�

	int sum = 0;
	int startIndex = 0;//���ڿ� ���� �˻��� ���� �ε���
	while (true) {
		int fIndex = s.find('+', startIndex);// s����, startIndex(0)����  + ���ڸ� �˻��Ͽ� findex�� �ִ´�.
		if (fIndex == -1)//+���ڸ� �߰��� �� ���ٸ�
		{
			string part = s.substr(startIndex);//part ��Ʈ���� ���� �� startindex�� �����Ͽ� �ִ´�.
			if (part == "")break;//+�� ������ ��� 
			cout << part << endl;
			sum += stoi(part);//���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
			break;
		}
		int count = fIndex - startIndex;//���꽺Ʈ������ �ڸ� ���� ����. 
		string part = s.substr(startIndex, count);//startIndex����, count���� ���ڸ� ���꽺Ʈ�� �Ͽ� part�� ����

		cout << part << endl;

		sum += stoi(part);//���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
		startIndex = fIndex + 1;//�˻��� ������ �ε��� ����
	}
	cout << "���ڵ��� ���� " << sum <<  endl;

}