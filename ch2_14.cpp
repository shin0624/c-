#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int num, total = 0; //Ŀ�� �� ��, �� �հ� ����
	char coffee[100];
	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�.\n";
	
	while (total <= 20000)//�� �հ谡 20000�� �̻��̸� ������ Ż���ϵ��� �Ѵ�.
	{
		cout << "�ֹ� >> ";
		cin >> coffee >> num;// Ŀ�� �̸��� �� ���� �Է¹޴´�.
		if (strcmp(coffee, "����������") == 0)//strcmp�� �̿��� Ŀ�� �̸��� ���Ѵ�.
		{
			cout << 2000 * num << "�� �Դϴ�. ���ְ� �弼��." << endl;
			total += 2000 * num;//�Ǹ� �� ���� Ŀ�� ������ ���� ���� �� �հ��� total�� �����Ѵ�.
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
		{
			cout << 2300 * num << "�� �Դϴ�. ���ְ� �弼��." << endl;
			total += 2300 * num;
		}
		else if (strcmp(coffee, "īǪġ��") == 0)
		{
			cout << 2500 * num << "�� �Դϴ�. ���ְ� �弼��." << endl;
			total += 2500 * num;
		}
		else
		{
			cout << "�߸��� �ֹ��Դϴ�. �ٽ� �ֹ����ּ���.\n";
			continue;//�ǵ��� ���� �ٸ� ���� �ԷµǾ��� ��� ���� ó������ ���ư� �ٽ� �ֹ��Ѵ�.

		}
	}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� �ƿ�~~~" << endl;


	return 0;
}