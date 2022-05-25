// N과 M(1)
// 
// 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램
// 1부터 N까지 자연수 중 중복 없이 M개를 고른 수열
// 
// 우선 수열의 개수는 N * (N - 1) * (N - 2) * (N - 3) ...
// M번 반복
// 
// N이 들어오면
// 1~N 까지의 vector를 만들고
// 
// 
// DFS를 활용하여 풀이
// 
// 

#include <iostream>
using namespace std;

#define MAX 9

int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { false, };

void dfs(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++) {	// 재귀로 arr에 값을 넣고 위에서 출력
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i;
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	dfs(0);	

	return 0;
}