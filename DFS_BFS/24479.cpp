// 알고리즘 수업 - 깊이 우선 탐색 1
// 
// N개의 node와 M개의 branch로 구성된 무방향 그래프(undirected graph)
// 노드의 방문 순서를 출력하는 함수
// 

#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
using namespace std;
#define MAX 100001

vector<int> graph[MAX];
vector<bool> visited(MAX, false);
int arr[MAX] = { 0 };				// 출력을 위한 배열
int sequence = 1;					// 현재 진행 순서

void DFS(int starting_node) {
	visited[starting_node] = true;
	arr[starting_node] = sequence;
	sequence++;
	for (int i = 0; i < graph[starting_node].size(); i++) {
		int next_node = graph[starting_node][i];
		if (!visited[next_node]) {
			DFS(next_node);
		}
	}
}

int main()
{
	clock_t start, finish;
	double duration;
	
	start = clock();
	int N, M, R;
	cin >> N >> M >> R;
	graph->resize(N + 1);
	visited.resize(N + 1);
	finish = clock();
	duration = (double)(finish - start);
	cout << duration << "ms" << endl;

	start = clock();
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	finish = clock();
	duration = (double)(finish - start);
	cout << duration << "ms" << endl;

	start = clock();
	for (int i = 1; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	finish = clock();
	duration = (double)(finish - start);
	cout << duration << "ms" << endl;

	start = clock();
	DFS(R);
	finish = clock();
	duration = (double)(finish - start);
	cout << duration << "ms" << endl;

	start = clock();
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << endl;
	}
	finish = clock();
	duration = (double)(finish - start);
	cout << duration << "ms" << endl;

	return 0;
}