// 소인수분해

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 2; i <= N; i++) {
		while (true) {
			if (N % i == 0) {
				N /= i;
				cout << i << endl;
			}
			else {
				break;
			}
		}
	}

	return 0;
}