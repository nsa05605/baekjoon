// 숫자의 합(N개의 숫자를 모두 더하기)
// 미해결

#include <iostream>
using namespace std;

int main()
{
	int N;	// 숫자의 개수
	int sum = 0;
	char input[101];
	cin >> N >> input;
	for (int i = 0; i < N; i++) {
		sum += input[i] - '0';
	}
	cout << sum << endl;

	return 0;
}