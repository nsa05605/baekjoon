// �� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է� : ù° �ٿ� A, B, C�� ������� �־�����. (2 �� A, B, C �� 10000)
// ��� : ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + b) % c << endl;
	cout << ( ((a % c) + (b % c)) % c ) << endl;
	cout << ((a * b) % c) << endl;
	cout << (((a % c) * (b % c)) % c) << endl;
	return 0;
}