#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int namelength = 0;//�Էµ� ���ڿ��� ���̰� ����� ����
	char name[100],longname[100]; //�̸��� �Է¹��� ���ڿ��� ���� �� �̸��� �� ���ڿ� ����
	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���.\n>> ";

	for (int i = 0; i < 5; i++)//5���� �̸��� �Է¹޵��� ����
	{
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		if (namelength < strlen(name))//�Է¹��� �̸��� namelength�� �����Ͽ� �ϳ��ϳ� ���̸� ����
		{
			namelength = strlen(name);//���� �� �̸��� ���������� namelength�� ����� ��.
			strcpy_s(longname, name);//strcpy�� �̿��� ���� �� �̸��� longname�� �����Ѵ�.
		}
	}
	cout << "���� �� �̸��� " << longname << endl;
	return 0;

}