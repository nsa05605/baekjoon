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
// 
// 
// DFS�� Ȱ���Ͽ� Ǯ��
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
	for (int i = 1; i <= N; i++) {	// ��ͷ� arr�� ���� �ְ� ������ ���
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