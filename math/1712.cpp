// ���ͺб���
// ������� A, ������� B, ��Ʈ�ϰ��� C
// A + ( B * �ǸŴ�� ) < ( C * �ǸŴ�� ) �� �Ǵ� �ǸŴ���� ����

#include <iostream>
using namespace std;

int main()
{
	unsigned int A, B, C;
	int sell = 0;
	cin >> A >> B >> C;
	if (B >= C) {
		sell = -1;
		cout << sell << endl;
		return 0;
	}
	sell = (A / (C - B)) + 1;
	cout << sell << endl;

	return 0;
}