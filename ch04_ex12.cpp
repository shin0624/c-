#include<iostream>
#include<string>
using namespace std;

int main() {
	string names[5]; //string �迭 ����

	for (int i = 0; i < 5; i++) {
		cout << "�̸� >> ";
		getline(cin, names[i], '\n');//getline�Լ��� ���� ǥ�Ⱑ ������ ���ڿ��� �Է¹޴´�.
	}
	string latter = names[0];
	for (int i = 0; i < 5; i++)
	{
		if(latter<names[i]){//names[i]�� latter���� �ڿ� �´ٸ�
			latter = names[i];//latter���ڿ� ����.(latter  >  names[i]�̸� ���� ���� �տ� ������ ���� ����ϵ��� �ٲ�
		}

	}
	cout << "�������� ���� �ڿ� ������ ���ڿ���  " << latter << endl;
}