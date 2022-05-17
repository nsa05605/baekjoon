// ���� ���
// 
// N kg ���
// ������ 3kg, 5kg
// 
// �ִ��� ���� ����
// 
// 18 kg ->  5 kg x 3 + 3 kg x 1
// 4 kg -> x
// 6 kg -> 3 kg x 2
// 9 kg -> 3 kg x 3
// 11 kg -> 5 kg x 1 + 3 kg x 2
// 
// ����� ��
// N < 5 �� ��� N = 3 �� �����ϸ� -1
// N % 5 = 0	-> N / 5 �� ����
// N % 5 = 1	-> ( ( N / 5 ) - 1 ) + 2
// N % 5 = 2	-> ( ( N / 5 ) - 2 ) + 4
// N % 5 = 3	-> ( N / 5 ) + 1
// N % 5 = 4	-> ( ( N / 5 ) - 1 ) + 3
// 

#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	if (N < 8) {		// 8kg���� ������
		if (N == 0) { cout << 0 << '\n'; }	// 0kg �̸� 0
		else if (N % 5 == 0) { cout << 1 << '\n'; }	// 5kg �̸� 1
		else if (N % 3 == 0) { cout << N / 3 << '\n'; }	// 3kg or 6kg�̸� N / 3
		else { cout << -1 << '\n'; }	// �ܴ̿� �Ұ���
	}
	else {				// 8kg �̻��̸� �Ʒ� ������
		if (N % 5 == 0) { cout << (N / 5) << '\n'; }
		else if (N % 5 == 1) { cout << ((N / 5) - 1) + 2 << '\n'; }
		else if (N % 5 == 2) { cout << ((N / 5) - 2) + 4 << '\n'; }
		else if (N % 5 == 3) { cout << (N / 5) + 1  << '\n'; }
		else if (N % 5 == 4) { cout << ((N / 5) - 1) + 3 << '\n'; }
	}
	return 0;
}