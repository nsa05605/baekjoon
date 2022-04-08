// A + B - 4
// 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

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