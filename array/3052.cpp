// ³ª¸ÓÁö

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int count = 1;
	int num, int_remainder;
	vector<int> vec_remainder;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		int_remainder = (num % 42);
		vec_remainder.push_back(int_remainder);
	}
	sort(vec_remainder.begin(), vec_remainder.end());
	for (int i = 0; i < vec_remainder.size() - 1; i++) {
		if (vec_remainder[i] != vec_remainder[i + 1]) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}