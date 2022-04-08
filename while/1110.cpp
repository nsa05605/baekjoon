// 더하기 사이클

#include <iostream>
using namespace std;
int main()
{
	int n_in, n_out, n_init;
	int count = 0;
	cin >> n_init;
	n_in = n_init;
	while (true) {
		n_out = ((((n_in / 10) + (n_in % 10)) % 10) + ((n_in % 10) * 10));
		n_in = n_out;
		count++;
		if (n_init == n_out)
			break;
	}
	cout << count << endl;
	return 0;
}