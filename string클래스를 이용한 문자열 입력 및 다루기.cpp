#include <iostram>
#include <string>
using namespace std;

int main() {
	string song("Falling in my love with you"); //���ڿ� song
	string elvis("Elvis Presley"); // ���ڿ� elvis
	string singer; //���ڿ� singer

	cout << song + +"�� �θ� ������ ";
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")?"; //[]������ ���

	getline(cin, singer);
	if (singer == elvis)
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl;
}