// 한수
// 135, 258 등의 수

#include <iostream>
using namespace std;

int hansoo(int num) {
	int max_num = 99;
	if (num < 100) {
		return num;
	}
	else if (num < 111) {
		return max_num;
	}
	else {
		for (int i = 111; i < 1001; i++) {
			// 1의 자리는 (i % 10)
			// 10의 자리는 ((i / 10) % 10)
			// 100의 자리는 (i / 100)
			if (((i / 100) - ((i / 10) % 10)) == (((i / 10) % 10) - (i % 10))) {	// 한수이면
				max_num += 1;
			}
			if (i == num) {
				return max_num;
			}
		}
	}
}

int main()
{
	int in_num;
	cin >> in_num;
	cout << hansoo(in_num) << endl;
	return 0;
}