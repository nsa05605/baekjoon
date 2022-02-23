// ฐ๖ผภ
// ภิทย : 472 385
// รโทย : 2360 3776 1416 181720

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << a * (b % 10) << endl;
	cout << a * (((b % 100) - (b % 10))/10) << endl;
	cout << a * (((b % 1000) - (b % 100)) / 100) << endl;
	cout << a * b << endl;
	return 0;
}