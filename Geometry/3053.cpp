// �ý� ������
// 
// �� �� T1(x1,y1), T2(x2,y2) ������ �Ÿ���
// D(T1,T2) = | x1 - x2 | + | y1 - y2 |
// 
// ������ R�� �־����� ��
// ��Ŭ���� �����п����� ���� ���̿�
// �ý� �����п����� ���� ����
// 

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double R;
	cin >> R;
	
	double U = R * R * M_PI;
	double T = (R + R) * R;

	cout << fixed;
	cout.precision(6);
	cout << U << '\n';
	cout << T << '\n';
	return 0;
}