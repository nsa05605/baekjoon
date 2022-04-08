// 최소, 최대

#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int *a = new int[1000000];
	int n, max, min;
	max = -1000000;
	min = 1000000;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		if (a[i] > max) {
			max = a[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << min << " " << max;

	delete[] a;
	return 0;
}