// �Ѽ�
// 135, 258 ���� ��

#include <iostream>
using namespace std;

int hansoo(int num) {
	int max_num = 99;
	if (num < 100) {
		return num;
	}
	else if (num < 111) {
		return max_num;
	}
	else {
		for (int i = 111; i < 1001; i++) {
			// 1�� �ڸ��� ((i % 100) / 10)
			// 10�� �ڸ��� (i % 10)
			// 100�� �ڸ��� (i / 100)
			if (((i / 100) - (i % 10)) == ((i % 10) - ((i % 100) / 10))) {	// �Ѽ��̸�
				max_num += 1;
			}
			if (i == num) {
				return max_num;
			}
		}
	}
}

int main()
{
	int in_num;
	cin >> in_num;
	cout << hansoo(in_num) << endl;
	return 0;
}