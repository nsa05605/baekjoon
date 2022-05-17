// ACM 호텔
// 
// 호텔 정문에서 걷는 거리가 가장 짧은 방을 선호
// 엘레베이터는 가장 왼쪽에 있고
// W x H 개의 방이 있는 형태
// 호텔 정문은 1층 엘레베이터 바로 앞
// 
// 방번호는 YXX or YYXX 형태 ( ex_ 12층 3호 = 1203 )
// XX의 거리가 짧은 것을 선호하는데
// XX가 같다면 YY가 짧은 것을 선호
// 
// 입력은 T 개의 테스트 데이터 입력 후
// H, W, N 순으로 T번 입력

#include <iostream>
#include <vector>
using namespace std;

int ComputeRoomNumber(int H, int W, int N, vector<int> &vec_room) {	// 방번호를 계산하는 함수
	int room_number;
	int count = 0;
	for (int i = 1; i <= W; i++) {
		for (int j = 1; j <= H; j++) {
			room_number = j * 100 + i;	// 방번호는 세로(H)부터 늘고, 층이 H만큼 올라가면 W++
			count++;
			if (count == N) { 
				vec_room.push_back(room_number);
				return 0;
			}
		}
	}
	return 0;
}

int main()
{
	int T, H, W, N;
	cin >> T;
	vector<int> Vec_room;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		ComputeRoomNumber(H, W, N, Vec_room);
	}

	for (int i = 0; i < Vec_room.size(); i++) {
		cout << Vec_room[i] << "\n";
	}

	return 0;
}