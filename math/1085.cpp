// ���簢������ Ż��
// �Ѽ��� ���� (x,y)�� ��ġ
// ���� �Ʒ��� (0,0), ������ ���� (w,h)
// ù�ٿ� x, y, w, h�� �־���
// w-x or x-0, h-y or y-0 �� ����ϸ� �ɵ�?

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