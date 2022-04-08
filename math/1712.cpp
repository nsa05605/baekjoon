// 손익분기점
// 고정비용 A, 가변비용 B, 노트북가격 C
// A + ( B * 판매대수 ) < ( C * 판매대수 ) 가 되는 판매대수를 추출

#include <iostream>
using namespace std;

int main()
{
	unsigned int A, B, C;
	int sell = 0;
	cin >> A >> B >> C;
	if (B >= C) {
		sell = -1;
		cout << sell << endl;
		return 0;
	}
	sell = (A / (C - B)) + 1;
	cout << sell << endl;

	return 0;
}