// ������� ����
// ���� ���� ������ ����⸦ Ÿ�� �����ϵ��� ��
// 
// �Է����δ� �׽��� ���̽��� �� T
// ������ �� N, ������� ���� M
// ���� M���� �ٿ� a�� b�� ��(a-b �պ� ����� ����)
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