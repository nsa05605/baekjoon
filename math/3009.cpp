// 네 번째 점
// 세 점이 주어졌을 때, 직사각형을 만들기 위한 네 번째 점을 구하기

#include <iostream>
using namespace std;

int main()
{
	int a[2], b[2], c[2], d[2];
	cin >> a[0] >> a[1];
	cin >> b[0] >> b[1];
	cin >> c[0] >> c[1];

	if (a[0] == b[0]) {
		if (a[1] == c[1]) {
			d[0] = c[0];
			d[1] = b[1];
		}
		else if (b[1] == c[1]) {
			d[0] = c[0];
			d[1] = a[1];
		}
	}
	else if (a[0] == c[0]) {
		if (a[1] == b[1]) {
			d[0] = b[0];
			d[1] = c[1];
		}
		else if (c[1] == b[1]) {
			d[0] = b[0];
			d[1] = a[1];
		}
	}
	else if (b[0] == c[0]) {
		if (a[1] == c[1]) {
			d[0] = a[0];
			d[1] = b[1];
		}
		else if (a[1] == b[1]) {
			d[0] = a[0];
			d[1] = c[1];
		}
	}
	cout << d[0] << " " << d[1] << endl;

	return 0;
}