// ����
// 
// ù �ٿ� ���� K
// ���� K���� ������ 1���� �־�����
//	������ 0�� ��쿡�� ���� �ֱٿ� �� ���� �����, �ƴ� ��� �ش� ���� ����
//	������ 0�� ��쿡 ���� �� �ִ� ���� ������ ������ �� �ִ�
// 
// ����̰� ���������� ��� ���� ���� ����Ѵ�.
// ���������� ��� ���� ���� 2^31 - 1 ���� �۰ų� ���� ����
// 
// 
// ���ڸ� �Է� �ް�, �̰��� vector � �����س���
// �Է��� 0�̸� pop_back() �����ϸ� �ɵ�?
// 
// 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int K;
	cin >> K;
	vector<int> my_vector;

	for (int i = 0; i < K; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			my_vector.pop_back();
		}
		else {
			my_vector.push_back(num);
		}
	}
	int sum = 0;
	for (int j = 0; j < my_vector.size(); j++) {
		sum += my_vector[j];
	}
	cout << sum << '\n';

	return 0;
}