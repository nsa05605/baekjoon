// 소수 찾기
// 2 3 5 7 11 13 17 19 ...

#include <iostream>
using namespace std;

int main()
{
	int N, num;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num < 2) continue;	// num이 0, 1이면 소수가 아니기 때문에 넘어감
		int standard = 1;
		for (int j = 2; j*j <= num; j++) {
			if (num % j == 0) {	// num이 j의 배수이면 기준 = 0 으로 하고 넘어감
				standard = 0;
				break;
			}
			standard = 1;	// 위에서 검사했을 때 배수가 아닌 것으로 나오면 standard = 1
		}
		if (standard == 1) {
			count++;
		}
	}
	cout << count << endl;

	return 0;
}