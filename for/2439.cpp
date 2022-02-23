// º° Âï±â_2

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j)
			for (int k = n; k == (i-j); --k)
				cout << "a";
			cout << "*";
		cout << '\n';
	}
	return 0;
}