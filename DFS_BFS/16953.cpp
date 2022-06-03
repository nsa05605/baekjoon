// 오답
// A -> B
// 
// 정수 A를 B로 바꾸려고 하는데
// 2를 곱하거나
// 오른쪽에 1을 추가하거나
// 두 방법으로 시도함
// 
// 연산의 횟수 + 1 을 출력
// 만들 수 없다면 -1 을 출력
// 
// 
// 
// 
// 
#include <iostream>
using namespace std;

long long A, B;
int cnt = 1;

void function(long long B) {

	//if ((B % 10 == 1) && (((B / 10) == A) || ((B / 10) % 2 == 0))) {
		// 마지막 값이 1이고, 1을 제거한 값이 A와 같거나 짝수이면
	if ((B % 10 == 1)){								// 마지막이 1이면
		B /= 10;									// 마지막 1을 제거
		cnt++;										// 연산 횟수 + 1
		if (B == A) {								// B가 A와 같아졌으면
			return;
		}
		else if ((B < A)) {			// B가 A보다 작아졌거나, 홀수가 됐으면
			cnt = -1;
			return;
		}
		function(B);
	}
	else if (B % 2 == 0) {							// 짝수이면
		B /= 2;										// 2로 나누고
		cnt++;
		if (B == A) {
			return;
		}
		else if (B < A) {
			cnt = -1;
			return;
		}
		function(B);
	}
	else {											// 마지막 값이 1이 아닌데 홀수이면
		cnt = -1;
		return;
	}
}

int main()
{
	cin >> A >> B;
	function(B);
	cout << cnt << '\n';

	return 0;
}