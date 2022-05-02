// 볼질
// 

#include <iostream>
//#include <vector>
#include <deque>
using namespace std;

class Baseball
{
public:		// variables
	deque<int> base = { 0,0,0,0 };		// 각 base를 나타내는 vector
										// index를 활용해서 base를 결정하면 될듯
	deque<int>::iterator init = base.begin();

	int score = 0;						// 점수
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
				balls += 1;					// wild_pitch도 볼이기 때문
				if (balls != 4) {
					base.push_front(0);			// 각 주자가 진루하고, 1루는 비움(0)
				}
				else if (balls == 4) {			// 만약 볼카운트가 4가 되면
					base.push_front(1);			// 타자는 볼넷으로 진루하고, 모든 주자도 진루
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

			if (base[3] == 1) {				// 3루에 주자가 있고, base에 push_back이 되면 3루 주자가 홈으로 들어온다.
				score++;
				base[3] = 0;				// base_home initialize
				//cout << "score : " << score << endl;
			}
		}
	}

	void Hitter_Run() {			// 타자 출루
		if (base[0] == 0) {		// 1루가 비어있을 때
			base[0] = 1;
		}
		else if (base[0] == 1 && base[1] == 0) {	// 1루 주자가 있고, 2루가 비어있을 때
			base[1] = 1;
		}
		else if (base[0] == 1 && base[1] == 1 && base[2] == 0) {	// 1,2루에 주자가 있고, 3루가 비어있을 때
			base[2] = 1;
		}
		else {					// 만루일 때
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