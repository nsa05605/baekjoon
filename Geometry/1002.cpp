// �ͷ�
// 
// �������� ��ǥ(x1,y1)�� ���ȯ�� ��ǥ(x2,y2)�� �־�����
// �������� ����� �������� �Ÿ� r1
// ���ȯ�� ����� �������� �Ÿ� r2
// ������� ���� �� �ִ� ��ǥ�� ���� ���
// 
// �Է�
// ù �ٿ� the number of test cases
// ���� x1,y1,r1,x2,y2,r2
// 
// ���� ��ġ�� ������ ���Ѵ��̸� -1
// 
// 
// �Ÿ� 1 - sqrt(0^2 + 1^2)
// �Ÿ� 2 - sqrt(0^2 + 2^2) or sqrt(1^2 + 1^2)
// �Ÿ� 3 - sqrt(0^2 + 3^2) or sqrt(1^2 + 2^2)
// �Ÿ� 4 - sqrt(0^2 + 4^2) or sqrt(1^2 + 3^2) or sqrt(2^2 + 2^2)
// �Ÿ� 5 - sqrt(0^2 + 5^2) or sqrt(1^2 + 4^2) or sqrt(2^2 + 3^2)
// �Ÿ� 6 - sqrt(0^2 + 6^2) or sqrt(1^2 + 5^2) or sqrt(2^2 + 4^2) or sqrt(3^2 + 3^2)
// �Ÿ� 7 - sqrt(0^2 + 7^2) or sqrt(1^2 + 6^2) or sqrt(2^2 + 5^2) or sqrt(3^2 + 4^2)
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
		Baek(x2, y2, r2);		// �������� ���ȯ ����

	}

	return 0;
}