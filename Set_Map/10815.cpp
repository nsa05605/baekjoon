// 숫자카드
// 
// 정수 하나가 적혀져 있는 카드
// 숫자 카드 N개 가지고 있고
// 정수 M이 주어졌을 때, 이 수가 적혀있는 숫자 카드를 가지고 있는지 구하기
// 
// 입력
// 첫째 줄에는 상근이가 가지고 있는 숫자 카드의 개수 N이 주어지고
// 둘째 줄에는 정수가 주어진다.
// 셋째 줄에는 M이 주어지고
// 넷째 줄에는 상근이가 가지고 있는가 구하는 카드의 숫자
// 
// 있으면 1, 없으면 0

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