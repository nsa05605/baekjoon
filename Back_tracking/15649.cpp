// �̿ϼ�
// N�� M(1)
// 
// �ڿ��� N�� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷�
// 1���� N���� �ڿ��� �� �ߺ� ���� M���� �� ����
// 
// �켱 ������ ������ N * (N - 1) * (N - 2) * (N - 3) ...
// M�� �ݺ�
// 
// N�� ������
// 1~N ������ vector�� �����


#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> number) {



}

int main()
{
	int N, M;
	cin >> N >> M;
	bool used[9] = { false };
	vector<int> number = { 1,2,3,4,5,6,7,8 };
	
	number.resize(N);
	
	for (int i = 0; i < number.size(); i++) {
		for (int j = 0; j < number.size(); j++) {
			if (i != j) {
				cout << number[i] << " " << number[j] << endl;
			}
		}
	}
	

	return 0;
}