// �����ﰢ��
// �� ���� ���̷� �����ﰢ�� ���� Ȯ���ϱ�

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	while (1) {
		int x[3];
		cin >> x[0] >> x[1] >> x[2];
		if (x[0] == 0 || x[1] == 0 || x[2] == 0) {	// �� ���� �� �� �ϳ��� 0�̸� ����
			break;
		}
		if (pow(x[0], 2) + pow(x[1], 2) == pow(x[2], 2)) {
			vec.push_back(1);
		}
		else if (pow(x[1], 2) + pow(x[2], 2) == pow(x[0], 2)) {
			vec.push_back(1);
		}
		else if (pow(x[2], 2) + pow(x[0], 2) == pow(x[1], 2)) {
			vec.push_back(1);
		}
		else {
			vec.push_back(0);
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == 1) {
			cout << "right" << endl;
		}
		else if (vec[i] == 0) {
			cout << "wrong" << endl;
		}
	}

	return 0;
}