// A + B - 4
// �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a, b;
	while (true) {
		cin >> a >> b;
		if (cin.eof() == true) {
			break;
		}
		else
			cout << a + b << endl;
	}
	return 0;
}