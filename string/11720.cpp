// ������ ��(N���� ���ڸ� ��� ���ϱ�)
// ���ذ�

#include <iostream>
using namespace std;

int main()
{
	int N;	// ������ ����
	int sum = 0;
	char input[101];
	cin >> N >> input;
	for (int i = 0; i < N; i++) {
		sum += input[i] - '0';
	}
	cout << sum << endl;

	return 0;
}