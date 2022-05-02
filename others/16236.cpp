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



#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Space
{
public:	// variables
	vector<int> m_pose;							// pose data�� vector
	vector<vector<int>> m_fish_pose;			// ������� ��ǥ
	vector<vector<int>> m_shark_pose;			// �Ʊ� ����� ��ǥ
	map<vector<vector<int>>, int> fish_index;	// map<x, y, size>

public:	// constructor
	Space(int N) {							// N x N ��ķ� ������ ����
		vector<vector<int>> vec_space(N, vector<int>(N));

		for (int i = 0; i < N; i++) {		// i = row, j = col
			for (int j = 0; j < N; j++) {
				m_pose = { i + 1,j + 1 };
				cin >> vec_space[i][j];
				
				if ((vec_space[i][j]) > 0 && (vec_space[i][j]) < 7) {	// if fish
					m_fish_pose.push_back(m_pose);
					fish_index.insert({ m_fish_pose , vec_space[i][j]});		// ������� pose, size ����
				}
				if (vec_space[i][j] == 9) {	// if baby_shark
					m_shark_pose.push_back(m_pose);		// �Ʊ� ����� pose ����
				}
			}
		}
	}
	~Space() {}	// destructor

public:	// functions
	void GetPoseOfShark() {
		cout << m_shark_pose[0][0] << " " << m_shark_pose[0][1] << endl;
	}
	void GetPoseOfFish() {
		for (int i = 0; i < m_fish_pose.size(); i++) {
			cout << m_fish_pose[i][0] << " " << m_fish_pose[i][1] << endl;
		}
	}

};

int main()
{
	int N;
	cin >> N;
	
	Space space(N);
	space.GetPoseOfShark();
	space.GetPoseOfFish();



	return 0;
}