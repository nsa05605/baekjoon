// DFS�� BFS
// 
// DFS(Depth-First Search, ���� �켱 Ž��)
// 
// node�� ���� N
// branch�� ���� M
// starting node V
// 
// �켱 Ž�� ���θ� �����ϴ� bool type�� vector<bool> visited �� �����
// �� node�� branch�� �����ϴ� vector<vector<int>> graph �� ����(?)
// 
// main �Լ������� for������ branch ���迡 ���� �Է��� �޴µ�
// for(int i = 0; i < M; i++) �� �ϰ�
// a, b ������ ���� cin >> a >> b �� ����
// graph[a].pushback(b)
// graph[b].pushback(a)	�� ������ vector�� pushback
// 
// 
// 
// 
// 
// 

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX 1001

vector<int> graph[MAX];		// �� node�� ����� node�� �ִ� vector�� array
vector<bool> visited_DFS(MAX, false);		// �湮 ���θ� ����ϴ� vector
vector<bool> visited_BFS(MAX, false);		// �湮 ���θ� ����ϴ� vector

void DFS(int start) {
	visited_DFS[start] = true;		// ���� node�� �湮 ǥ��
	cout << start << " ";
	for (int i = 0; i < graph[start].size(); i++) {
		int next = graph[start][i];
		if (!visited_DFS[next]) {
			DFS(next);
		}
	}
}

void BFS(int start) {
	queue<int> q;
	q.push(start);
	visited_BFS[start] = true;

	while (!q.empty()) {
		int vertex = q.front();
		q.pop();
		cout << vertex << " ";
		for (int i = 0; i < graph[vertex].size(); i++) {
			int next = graph[vertex][i];
			if (!visited_BFS[next]) {
				q.push(next);
				visited_BFS[next] = true;
			}
		}
	}
}

int main()
{
	int N, M, V;
	cin >> N >> M >> V;

	graph->resize(N + 1);			// 0�� node�� ������� �ʱ� ������ N+1���� resize

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);	// node a�� node b�� ������ ��Ÿ��
		graph[b].push_back(a);
	}

	for (int i = 0; i <= N; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	DFS(V);
	cout << endl;
	BFS(V);

	return 0;
}