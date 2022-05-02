// ����
// 

#include <iostream>
//#include <vector>
#include <deque>
using namespace std;

class Baseball
{
public:		// variables
	deque<int> base = { 0,0,0,0 };		// �� base�� ��Ÿ���� vector
										// index�� Ȱ���ؼ� base�� �����ϸ� �ɵ�
	deque<int>::iterator init = base.begin();

	int score = 0;						// ����
	int balls = 0;

public:		// functions
	void Game(int& N) {
		int ball_type;

		for (int i = 0; i < N; i++) {
			cin >> ball_type;				// 1 : ball / 2 : hit_by_pitch / 3 : wild_pitch

			if (ball_type == 2) {			// hit by pitch
				//cout << "hit by pitch" << endl;
				Hitter_Run();
			}
			else if (ball_type == 3) {		// wild_pitch
				//cout << "wild_pitch" << endl;
				balls += 1;					// wild_pitch�� ���̱� ����
				if (balls != 4) {
					base.push_front(0);			// �� ���ڰ� �����ϰ�, 1��� ���(0)
				}
				else if (balls == 4) {			// ���� ��ī��Ʈ�� 4�� �Ǹ�
					base.push_front(1);			// Ÿ�ڴ� �������� �����ϰ�, ��� ���ڵ� ����
					balls = 0;
				}
			}
			else if (ball_type == 1) {		// Normal ball
				//cout << "ball" << endl;
				balls += 1;
				if (balls == 4) {	// 4 balls
					Hitter_Run();
				}
			}

			if (base[3] == 1) {				// 3�翡 ���ڰ� �ְ�, base�� push_back�� �Ǹ� 3�� ���ڰ� Ȩ���� ���´�.
				score++;
				base[3] = 0;				// base_home initialize
				//cout << "score : " << score << endl;
			}
		}
	}

	void Hitter_Run() {			// Ÿ�� ���
		if (base[0] == 0) {		// 1�簡 ������� ��
			base[0] = 1;
		}
		else if (base[0] == 1 && base[1] == 0) {	// 1�� ���ڰ� �ְ�, 2�簡 ������� ��
			base[1] = 1;
		}
		else if (base[0] == 1 && base[1] == 1 && base[2] == 0) {	// 1,2�翡 ���ڰ� �ְ�, 3�簡 ������� ��
			base[2] = 1;
		}
		else {					// ������ ��
			base.push_front(1);
		}
		balls = 0;		// ball count initialize
	}
};

int main()
{
	int N;
	cin >> N;

	Baseball game;
	game.Game(N);

	cout << game.score << endl;

	return 0;
}