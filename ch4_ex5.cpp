#include <iostream>
using namespace std;

int main() {
	
	int n;

	cout << "�Է��� ������ ������? ";
	
	cin >> n;// ������ ���� �Է�

	if (n <= 0) return 0;//���� 0������ ���� �ԷµǸ� ���α׷� ����

	int* p = new int[n];//n���� ���� �迭 ���� �Ҵ�

	if (!p) //p==null�̸� ����
	{
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	for (int i = 0; i < n; i++)//n��° �������� �Է�
	{
		cout << i + 1 << "��° ���� : ";//������Ʈ ���
		cin >> p[i];//Ű����κ��� ���� �Է�
	}
	int sum = 0;
	for (int i = 0; i < n; i++)//�Է¹��� n���� �������� ����
		sum += p[i];
	cout << "��� = " << sum / n << endl;

	delete[] p;//�迭 �޸� ��ȯ

}