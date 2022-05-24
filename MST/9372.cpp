// 상근이의 여행
// 가장 적은 종류의 비행기를 타고 여행하도록 함
// 
// 입력으로는 테스스 케이스의 수 T
// 국가의 수 N, 비행기의 종류 M
// 이후 M개의 줄에 a와 b의 쌍(a-b 왕복 비행기 있음)
// 
// 
// 
#include <iostream>
#include <vector>
using namespace std;



int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;
		vector<int> graph[1000];
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}
		// function

	}

	return 0;
}