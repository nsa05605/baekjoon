// 미완성
// 토마토
// 
// N x M 상자의 칸에 하나씩 보관
// 익은 토마토와 익지 않은 토마토가 존재
// 익은 토마토의 인접한 곳에 있는 익지 않은 토마토는 하루가 지나면 익는다
// 
// 입력으로 N, M 입력 후
// 상자에 있는 토마토의 정보 입력
// 1은 익은 토마토, 0은 익지 않은 토마토, -1은 토마토가 없는 칸

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 1000

int graph[MAX][MAX];
bool ripened[MAX][MAX] = {false};	// 상자에 담긴 토마토가 익었는지를 담는 배열
int tomato_box[MAX][MAX];			// 상자에 담긴 토마토의 정보를 담는 배열
int M, N;

bool check() {
	// while (1) 혹은 for문으로 1 주변을 1로 바꾸는 것을 하고
	// check 함수를 다시 불러와서 재귀로 사용하면 될듯?
	// 다만 -1이면 -1을 유지하도록

}

int main()
{
	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int tomato;
			cin >> tomato;

			tomato_box[i][j] = tomato;		// i행 j열에 입력
			if (tomato == 1) { ripened[i][j] == true; }
		}
	}




	return 0;
}