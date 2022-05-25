// 택시 기하학
// 
// 두 점 T1(x1,y1), T2(x2,y2) 사이의 거리는
// D(T1,T2) = | x1 - x2 | + | y1 - y2 |
// 
// 반지름 R이 주어졌을 때
// 유클리드 기하학에서의 원의 넓이와
// 택시 기하학에서의 원의 넓이
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