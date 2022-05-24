// ����ī��
// 
// ���� �ϳ��� ������ �ִ� ī��
// ���� ī�� N�� ������ �ְ�
// ���� M�� �־����� ��, �� ���� �����ִ� ���� ī�带 ������ �ִ��� ���ϱ�
// 
// �Է�
// ù° �ٿ��� ����̰� ������ �ִ� ���� ī���� ���� N�� �־�����
// ��° �ٿ��� ������ �־�����.
// ��° �ٿ��� M�� �־�����
// ��° �ٿ��� ����̰� ������ �ִ°� ���ϴ� ī���� ����
// 
// ������ 1, ������ 0

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int N, M;
	map<int, bool> owned_card;
	vector<int> result;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int query_number;
		cin >> query_number;
		owned_card.insert({ query_number, true });
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		int test_number;
		cin >> test_number;
		if (owned_card[test_number] == true) {
			result.push_back(1);
		}
		else { result.push_back(0); }
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << ' ';
	}

	return 0;
}