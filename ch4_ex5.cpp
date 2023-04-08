#include <iostream>
using namespace std;

int main() {
	
	int n;

	cout << "입력할 정수의 개수는? ";
	
	cin >> n;// 정수의 개수 입력

	if (n <= 0) return 0;//만약 0이하인 수가 입력되면 프로그램 종료

	int* p = new int[n];//n개의 정수 배열 동적 할당

	if (!p) //p==null이면 종료
	{
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++)//n번째 정수까지 입력
	{
		cout << i + 1 << "번째 정수 : ";//프롬프트 출력
		cin >> p[i];//키보드로부터 정수 입력
	}
	int sum = 0;
	for (int i = 0; i < n; i++)//입력받은 n개의 정수들을 더함
		sum += p[i];
	cout << "평균 = " << sum / n << endl;

	delete[] p;//배열 메모리 반환

}