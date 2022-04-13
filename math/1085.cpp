// 직사각형에서 탈출
// 한수는 지금 (x,y)에 위치
// 왼쪽 아래는 (0,0), 오른쪽 위는 (w,h)
// 첫줄에 x, y, w, h가 주어짐
// w-x or x-0, h-y or y-0 을 출력하면 될듯?

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int a, b;
	a = (w - x);
	b = (h - y);

	cout << min(min(x,a),min(y,b)) << endl;

	return 0;
}