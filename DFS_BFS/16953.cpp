// ����
// A -> B
// 
// ���� A�� B�� �ٲٷ��� �ϴµ�
// 2�� ���ϰų�
// �����ʿ� 1�� �߰��ϰų�
// �� ������� �õ���
// 
// ������ Ƚ�� + 1 �� ���
// ���� �� ���ٸ� -1 �� ���
// 
// 
// 
// 
// 
#include <iostream>
using namespace std;

long long A, B;
int cnt = 1;

void function(long long B) {

	//if ((B % 10 == 1) && (((B / 10) == A) || ((B / 10) % 2 == 0))) {
		// ������ ���� 1�̰�, 1�� ������ ���� A�� ���ų� ¦���̸�
	if ((B % 10 == 1)){								// �������� 1�̸�
		B /= 10;									// ������ 1�� ����
		cnt++;										// ���� Ƚ�� + 1
		if (B == A) {								// B�� A�� ����������
			return;
		}
		else if ((B < A)) {			// B�� A���� �۾����ų�, Ȧ���� ������
			cnt = -1;
			return;
		}
		function(B);
	}
	else if (B % 2 == 0) {							// ¦���̸�
		B /= 2;										// 2�� ������
		cnt++;
		if (B == A) {
			return;
		}
		else if (B < A) {
			cnt = -1;
			return;
		}
		function(B);
	}
	else {											// ������ ���� 1�� �ƴѵ� Ȧ���̸�
		cnt = -1;
		return;
	}
}

int main()
{
	cin >> A >> B;
	function(B);
	cout << cnt << '\n';

	return 0;
}