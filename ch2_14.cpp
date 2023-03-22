#include<iostream>
#include<cstring>
using namespace std;

int main() {
	int num, total = 0; //커피 잔 수, 총 합계 선언
	char coffee[100];
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다.\n";
	
	while (total <= 20000)//총 합계가 20000원 이상이면 루프를 탈출하도록 한다.
	{
		cout << "주문 >> ";
		cin >> coffee >> num;// 커피 이름과 잔 수를 입력받는다.
		if (strcmp(coffee, "에스프레소") == 0)//strcmp를 이용해 커피 이름을 비교한다.
		{
			cout << 2000 * num << "원 입니다. 맛있게 드세요." << endl;
			total += 2000 * num;//판매 잔 수에 커피 가격을 곱한 값을 총 합계인 total에 저장한다.
		}
		else if (strcmp(coffee, "아메리카노") == 0)
		{
			cout << 2300 * num << "원 입니다. 맛있게 드세요." << endl;
			total += 2300 * num;
		}
		else if (strcmp(coffee, "카푸치노") == 0)
		{
			cout << 2500 * num << "원 입니다. 맛있게 드세요." << endl;
			total += 2500 * num;
		}
		else
		{
			cout << "잘못된 주문입니다. 다시 주문해주세요.\n";
			continue;//의도한 값과 다른 값이 입력되었을 경우 루프 처음으로 돌아가 다시 주문한다.

		}
	}
	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 뵈요~~~" << endl;


	return 0;
}