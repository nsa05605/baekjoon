// [ ������ ]
// �Ʊ� ���
// 
// N x N ũ���� ����
// ����� M����, �Ʊ� ��� 1����
// �Ʊ� ����� ũ��� 2, 1�ʿ� �� ĭ�� �̵�
// 
// �ڽź��� ���� ������ ��Ƹ��� �� �ְ�,
// �ڽŰ� ũ�Ⱑ ���� ������ ������ �� ����
// �Ÿ��� ���ٸ� �Դ� �켱������ ��, ����
// �ڽ��� ũ��� ���� ���� ����⸦ ���� ������ ũ�Ⱑ 1 ����
// ex_ ũ�Ⱑ 2�� �Ʊ� ���� ����� 2������ ������ ũ�Ⱑ 3
// 
// input : ������ ũ�� N(2 <= N <= 20)
// ��° �ٺ��� �� ������ ����
// 0 : ��ĭ
// 1,2,3,4,5,6 : ������� ũ��
// 9 : �Ʊ� ���
// 
// 
// fish pose :	(m_fish_pose[i][0], m_fish_pose[i][1])
// shark pose :	(m_shark_pose[i][0], m_shark_pose[i][1])
// 
// �� ��ġ�� ��ǥ : vec_space[i][j] -> i�� j��
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
	int m_n;									// ������ ũ�� n
	int m_x, m_y;								// x, y ��ǥ
	pair<int, int> m_pair;
	vector<pair<int, int>> m_coordinates;		// x, y ��ǥ�� �����ϴ� ����
	vector<int> m_pose;							// pose data�� vector
	vector<vector<int>> vec_space;				// ����
	vector<vector<int>> m_fish_pose;			// ������� ��ǥ
	vector<vector<int>> m_shark_pose;			// �Ʊ� ����� ��ǥ
	//map<vector<vector<int>>, int> fish_index;	// map<x, y, size>
	int m_second = 0;							// �ҿ�ð�
	int m_eatfish = 0;							// ���� �����
	int m_shark_size = 2;						// �Ʊ� ����� ũ��

public:	// constructor
	//Space(int N)							// N x N ��ķ� ������ ����
	//	: vec_space(N, vector<int>(N))
	//{
	//	m_n = N;
	//	for (int i = 0; i < N; i++) {		// i = row, j = col
	//		for (int j = 0; j < N; j++) {
	//			m_pose = { i + 1,j + 1 };	// i,j�� 0���� �����ϱ� ������ 1�� ������
	//			cin >> vec_space[i][j];
	//			
	//			if ((vec_space[i][j]) > 0 && (vec_space[i][j]) < 7) {	// if fish
	//				m_fish_pose.push_back(m_pose);
	//				//fish_index.insert({ m_fish_pose , vec_space[i][j]});	// ������� pose, size ����
	//			}
	//			if (vec_space[i][j] == 9) {	// if baby_shark
	//				m_shark_pose.push_back(m_pose);		// �Ʊ� ����� pose ����
	//				vec_space[i][j] = 0;				// ������ �� ����� ũ�Ⱑ 9�� �Ǵ� ���� ������
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
	void SizeUp() {							// �Ʊ� ����� ũ�Ⱑ Ŀ���� �Լ�
		if (m_eatfish >= m_shark_size) {
			m_eatfish -= m_shark_size;
			m_shark_size++;
		}
	}
	void FindFish() {
		
		// (-1,0), (0,-1), (1,0), (0,1) �������� ã��, ������ �� �ڸ��� �̵��ؼ� ���� ������� ã�� ���� �ݺ�?
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