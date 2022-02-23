// A + B - 8

#include <iostream>
using namespace std;

int main()
{
	int T;
	int a, b;
	cin >> T;
	for (int i = 1; i <= T; ++i) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
	}
	return 0;
}