// �Ҽ� ã��
// 2 3 5 7 11 13 17 19 ...

#include <iostream>
using namespace std;

int main()
{
	int N, num;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num < 2) continue;	// num�� 0, 1�̸� �Ҽ��� �ƴϱ� ������ �Ѿ
		int standard = 1;
		for (int j = 2; j*j <= num; j++) {
			if (num % j == 0) {	// num�� j�� ����̸� ���� = 0 ���� �ϰ� �Ѿ
				standard = 0;
				break;
			}
			standard = 1;	// ������ �˻����� �� ����� �ƴ� ������ ������ standard = 1
		}
		if (standard == 1) {
			count++;
		}
	}
	cout << count << endl;

	return 0;
}