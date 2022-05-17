// 설탕 배달
// 
// N kg 배달
// 봉지는 3kg, 5kg
// 
// 최대한 적은 봉지
// 
// 18 kg ->  5 kg x 3 + 3 kg x 1
// 4 kg -> x
// 6 kg -> 3 kg x 2
// 9 kg -> 3 kg x 3
// 11 kg -> 5 kg x 1 + 3 kg x 2
// 
// 경우의 수
// N < 5 의 경우 N = 3 을 제외하면 -1
// N % 5 = 0	-> N / 5 가 정답
// N % 5 = 1	-> ( ( N / 5 ) - 1 ) + 2
// N % 5 = 2	-> ( ( N / 5 ) - 2 ) + 4
// N % 5 = 3	-> ( N / 5 ) + 1
// N % 5 = 4	-> ( ( N / 5 ) - 1 ) + 3
// 

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N < 8) {		// 8kg보다 작으면
		if (N == 0) { cout << 0 << '\n'; }	// 0kg 이면 0
		else if (N % 5 == 0) { cout << 1 << '\n'; }	// 5kg 이면 1
		else if (N % 3 == 0) { cout << N / 3 << '\n'; }	// 3kg or 6kg이면 N / 3
		else { cout << -1 << '\n'; }	// 이외는 불가능
	}
	else {				// 8kg 이상이면 아래 식으로
		if (N % 5 == 0) { cout << (N / 5) << '\n'; }
		else if (N % 5 == 1) { cout << ((N / 5) - 1) + 2 << '\n'; }
		else if (N % 5 == 2) { cout << ((N / 5) - 2) + 4 << '\n'; }
		else if (N % 5 == 3) { cout << (N / 5) + 1  << '\n'; }
		else if (N % 5 == 4) { cout << ((N / 5) - 1) + 3 << '\n'; }
	}
	return 0;
}