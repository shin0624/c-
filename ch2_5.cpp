#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char array[100]; 
	int ea_x = 0; //���ڿ� �� x�� ����
	cout << "���ڵ��� �Է��϶�(100���̸�).\n";
	cin.getline(array, 100);
	for (int i = 0; i < strlen(array); i++)// ���ڿ� �� ���� ���� �ݺ� 
	{
		if (array[i] == 'x')//�Էµ� ���� �� x�� ���� ��� ������ ī��Ʈ
		{
			ea_x++;
		}
	}
	cout << "x�� ������ " << ea_x << endl; //x�� ���� ���

	return 0;
}