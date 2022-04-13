// ÆÑÅä¸®¾ó

#include <iostream>
using namespace std;

int function(int x) {
	return (x - 1);
}

int main()
{
	int input;
	cin >> input;
	int fac = input;
	for (int i = input; i > 1; i--) {
		fac *= function(i);
	}
	if (input == 0) {
		fac = 1;
	}
	cout << fac << endl;
	return 0;
}