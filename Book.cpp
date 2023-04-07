#include <iostream>
using namespace std;

class Book {
    int price;    // ����
    int pages;    // ��������
    string title; // ����

public:
    Book();  // (1)�⺻������ ����
    ~Book(); // (2)�Ҹ��� ���� 
    Book(int s, int g, string c); // (3) �Ű������� �ִ� �����ڼ���
    void show();
   // (4) ��� ����� ���� set() �Լ��� ������ ������ ��(�ϳ��� set �Լ��� ������ ��)
    void set(int price, int pages, string title);
};

// ���� �ڵ�� ���� �Ұ�

// ���⿡ �ڵ� �ۼ�

// (1) �⺻������ ����
Book::Book() {
    price = 10;
    pages = 20;
    title = "html";
    cout << "�⺻ ������ ȣ�� : " << price << "," << pages << "," << title << endl;
    
}

// (2) �Ҹ��� ���� 
Book::~Book(){
    cout << "�Ҹ��� ȣ��" << endl;
}
// (3) �Ű������� �ִ� ������ ����
Book::Book(int s, int g, string c) {
    cout << "�Ű������� �ִ� ������ ȣ�� : " << s << "," << g << "," << c << endl;
    s = price;
    g = pages;
    c = title;

}

void Book::show()
{
    cout << "==============" << endl;
    cout << "��   ��: " << price << endl;
    cout << "��������: " << pages << endl;
    cout << "��   ��: " << title << endl;
    cout << "==============" << endl << endl;
}

// (4) �Ʒ� set() �Լ� �ܿ� �� �ٸ� set() �Լ��� �ߺ��Ͽ� �������� �� ��.
void Book::set(int price, int pages, string title)
{
    this->price = price;
    this->pages = pages;
    this->title = title;
    
    

    // �Ű����� ���� �����ϴ� ��� ������ ����
    show();
}

// �Ʒ� main() �Լ��� ���� �Ұ�

int main()
{
    int price, page;
    string title;
    Book bk1;           // �⺻ ������ ȣ��

    cout << "���� �������� å���� : ";
    cin >> price >> page >> title;

    Book bk2(price, page, title); // �Ű������� �ִ� ������ ȣ��

    cout << "\nbk1.show() " << endl;
    bk1.show();

    cout << "���� �������� å����? ";
    cin >> price >> page >> title;
    cout << "bk1.set(price, page, title)" << endl;
    bk1.set(price, page, title);
    return 0;
}