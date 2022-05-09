// 바이러스

#include <iostream>
#include <vector>
#define MAX 101
using namespace std;

vector<int> graph[MAX];
vector<bool> visited(MAX, false);
int ComputerWithVirus = 0;

void DetectVirus(int start) {
	visited[start] = true;

	for (int i = 0; i < graph[start].size(); i++) {
		int next = graph[start][i];

		if (!visited[next]) {
			ComputerWithVirus++;
			DetectVirus(next);
		}

	}
}

int main()
{
	int connect, branch;
	cin >> connect >> branch;

	for (int i = 0; i < branch; i++) {
		int a, b;
		cin >> a >> b;

		graph[a].push_back(b);		// 각 node에 branch 삽입
		graph[b].push_back(a);
	}
	DetectVirus(1);
	cout << ComputerWithVirus << endl;

	return 0;
}