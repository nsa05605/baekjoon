// 터렛
// 
// 조규현의 좌표(x1,y1)와 백승환의 좌표(x2,y2)가 주어지고
// 조규현이 계산한 류재명과의 거리 r1
// 백승환이 계산한 류재명과의 거리 r2
// 류재명이 있을 수 있는 좌표의 수를 출력
// 
// 입력
// 첫 줄에 the number of test cases
// 이후 x1,y1,r1,x2,y2,r2
// 
// 만약 위치의 개수가 무한대이면 -1
// 
// 
// 거리 1 - sqrt(0^2 + 1^2)
// 거리 2 - sqrt(0^2 + 2^2) or sqrt(1^2 + 1^2)
// 거리 3 - sqrt(0^2 + 3^2) or sqrt(1^2 + 2^2)
// 거리 4 - sqrt(0^2 + 4^2) or sqrt(1^2 + 3^2) or sqrt(2^2 + 2^2)
// 거리 5 - sqrt(0^2 + 5^2) or sqrt(1^2 + 4^2) or sqrt(2^2 + 3^2)
// 거리 6 - sqrt(0^2 + 6^2) or sqrt(1^2 + 5^2) or sqrt(2^2 + 4^2) or sqrt(3^2 + 3^2)
// 거리 7 - sqrt(0^2 + 7^2) or sqrt(1^2 + 6^2) or sqrt(2^2 + 5^2) or sqrt(3^2 + 4^2)
// 
// 
// 
// 

#include <iostream>
using namespace std;

class Cho
{
public:	// variables
	int m_x, m_y;	// x, y coordinates
	int m_r;		// distance to Ryu

public:	// constructor
	Cho(int x, int y, int r) {
		m_x = x;
		m_y = y;
		m_r = r;
	}
};
class Baek
{
public:	// variables
	int m_x, m_y;	// x, y coordinates
	int m_r;		// distance to Ryu

public:	// constructor
	Baek(int x, int y, int r) {
		m_x = x;
		m_y = y;
		m_r = r;
	}
};

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		Cho(x1, y1, r1);
		Baek(x2, y2, r2);		// 조규현과 백승환 생성

	}

	return 0;
}