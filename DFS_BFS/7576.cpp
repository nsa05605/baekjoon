// �̿ϼ�
// �丶��
// 
// N x M ������ ĭ�� �ϳ��� ����
// ���� �丶��� ���� ���� �丶�䰡 ����
// ���� �丶���� ������ ���� �ִ� ���� ���� �丶��� �Ϸ簡 ������ �ʹ´�
// 
// �Է����� N, M �Է� ��
// ���ڿ� �ִ� �丶���� ���� �Է�
// 1�� ���� �丶��, 0�� ���� ���� �丶��, -1�� �丶�䰡 ���� ĭ

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 1000

int graph[MAX][MAX];
bool ripened[MAX][MAX] = {false};	// ���ڿ� ��� �丶�䰡 �;������� ��� �迭
int tomato_box[MAX][MAX];			// ���ڿ� ��� �丶���� ������ ��� �迭
int M, N;

bool check() {
	// while (1) Ȥ�� for������ 1 �ֺ��� 1�� �ٲٴ� ���� �ϰ�
	// check �Լ��� �ٽ� �ҷ��ͼ� ��ͷ� ����ϸ� �ɵ�?
	// �ٸ� -1�̸� -1�� �����ϵ���

}

int main()
{
	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int tomato;
			cin >> tomato;

			tomato_box[i][j] = tomato;		// i�� j���� �Է�
			if (tomato == 1) { ripened[i][j] == true; }
		}
	}




	return 0;
}