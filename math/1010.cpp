// 다리 놓기
// 
// 강의 서쪽에는 N개의 사이트가 있고
// 강의 동쪽에는 M개의 사이트가 있음(N <= M)
// 서쪽의 사이트 개수만큼 다리를 지으려 한다
// 다리끼리는 서로 겹쳐질 수 없을 때, 다리를 지을 수 있는 경우의 수
// 
// 입력의 첫 줄에는 테스트 케이스 T
// 그 다음부터 N, M이 주어진다
// 
// 
// 서쪽의 0번 사이트부터 시작
// 동쪽의 0번 사이트부터 (M - N) 사이트까지 이을 수 있고,
// 마찬가지로 서쪽의 n번은 n + (M - N) 까지 이을 수 있다.
// 이 과정에서 내부에 경우의 수가 작동함
// 이것을 조합로 구할 수 있을듯?
// 

#include <iostream>
using namespace std;

int main()
{
	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int answer = 1;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			answer = answer * (M - j);
			answer = answer / (1 + j);
		}
		cout << answer << '\n';
	}
	return 0;
}