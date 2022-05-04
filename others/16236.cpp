// [ 진행중 ]
// 아기 상어
// 
// N x N 크기의 공간
// 물고기 M마리, 아기 상어 1마리
// 아기 상어의 크기는 2, 1초에 한 칸씩 이동
// 
// 자신보다 작은 물고기는 잡아먹을 수 있고,
// 자신과 크기가 같은 물고기는 지나갈 수 있음
// 거리가 같다면 먹는 우선순위는 위, 왼쪽
// 자신의 크기와 같은 수의 물고기를 먹을 때마다 크기가 1 증가
// ex_ 크기가 2인 아기 상어는 물고기 2마리를 먹으면 크기가 3
// 
// input : 공간의 크기 N(2 <= N <= 20)
// 둘째 줄부터 각 공간의 상태
// 0 : 빈칸
// 1,2,3,4,5,6 : 물고기의 크기
// 9 : 아기 상어
// 
// 
// fish pose :	(m_fish_pose[i][0], m_fish_pose[i][1])
// shark pose :	(m_shark_pose[i][0], m_shark_pose[i][1])
// 
// 각 위치의 좌표 : vec_space[i][j] -> i행 j열
// 
// 

#include <iostream>
#include <map>
#include <vector>
#include <utility>
using namespace std;

class Space
{
public:	// variables
	int m_n;									// 공간의 크기 n
	int m_x, m_y;								// x, y 좌표
	pair<int, int> m_pair;
	vector<pair<int, int>> m_coordinates;		// x, y 좌표를 저장하는 벡터
	vector<int> m_pose;							// pose data의 vector
	vector<vector<int>> vec_space;				// 공간
	vector<vector<int>> m_fish_pose;			// 물고기의 좌표
	vector<vector<int>> m_shark_pose;			// 아기 상어의 좌표
	//map<vector<vector<int>>, int> fish_index;	// map<x, y, size>
	int m_second = 0;							// 소요시간
	int m_eatfish = 0;							// 먹은 물고기
	int m_shark_size = 2;						// 아기 상어의 크기

public:	// constructor
	//Space(int N)							// N x N 행렬로 공간을 만듦
	//	: vec_space(N, vector<int>(N))
	//{
	//	m_n = N;
	//	for (int i = 0; i < N; i++) {		// i = row, j = col
	//		for (int j = 0; j < N; j++) {
	//			m_pose = { i + 1,j + 1 };	// i,j가 0부터 시작하기 때문에 1씩 더해줌
	//			cin >> vec_space[i][j];
	//			
	//			if ((vec_space[i][j]) > 0 && (vec_space[i][j]) < 7) {	// if fish
	//				m_fish_pose.push_back(m_pose);
	//				//fish_index.insert({ m_fish_pose , vec_space[i][j]});	// 물고기의 pose, size 저장
	//			}
	//			if (vec_space[i][j] == 9) {	// if baby_shark
	//				m_shark_pose.push_back(m_pose);		// 아기 상어의 pose 저장
	//				vec_space[i][j] = 0;				// 추적할 때 상어의 크기가 9가 되는 것을 방지함
	//			}
	//		}
	//	}
	//}
	Space(int N) {
		m_n = N;
		int size;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> size;
				m_pair = make_pair(i, j);
				m_coordinates.push_back(m_pair);
				
				if (size > 0 && size < 7) {

				}
			}
		}
	}
	~Space() {}	// destructor

public:	// functions
	void GetPoseOfShark() {
		cout << "Shark : " << m_shark_pose[0][0] << " " << m_shark_pose[0][1] << endl;
	}
	void GetPoseOfFish() {
		for (int i = 0; i < m_fish_pose.size(); i++) {
			cout << "Fish : " << m_fish_pose[i][0] << " " << m_fish_pose[i][1] << endl;
		}
	}
	void GetMap() {
		for (int i = 0; i < m_n; i++) {
			for (int j = 0; j < m_n; j++) {
				cout << vec_space[i][j] << " ";
			}
			cout << endl;
		}
	}
	void SizeUp() {							// 아기 상어의 크기가 커지는 함수
		if (m_eatfish >= m_shark_size) {
			m_eatfish -= m_shark_size;
			m_shark_size++;
		}
	}
	void FindFish() {
		
		// (-1,0), (0,-1), (1,0), (0,1) 방향으로 찾고, 없으면 그 자리로 이동해서 같은 방법으로 찾는 것을 반복?
	}
	
};

int main()
{
	int N;
	cin >> N;
	
	Space space(N);
	space.GetPoseOfShark();
	space.GetPoseOfFish();

	space.GetMap();

	return 0;
}