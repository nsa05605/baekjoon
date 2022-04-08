// 숫자의 개수
// 미완성

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	int mult;
	int quotient, remainder;
	int my_arr[10] = { 0 };

	cin >> a >> b >> c;
	mult = a * b * c;

	while (true) {
		remainder = (mult % 10);
		for (int i = 0; i < 10; ++i) {
			if (remainder == i)
				my_arr[i] += 1;
		}
		if (mult < 10) {
				break;
		}
		else
			mult /= 10;
	}

	for (int i = 0; i < 10; ++i)
		cout << my_arr[i] << endl;

	return 0;
}

/*
17037300 에서 각 숫자 추출하기
mult = 17037300;
remainder = (mult % 10);	// (= 0)

! array에서 0을 +1

quotient = (mult / 10);		// (= 1703730)

! quotient를 mult에 mapping하기
! 이후 루프 돌리기




*/