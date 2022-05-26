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
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int distance = pow(x2 - x1, 2) + pow(y2 - y1, 2);
        int min_r = pow(r1 - r2, 2);
        int max_r = pow(r1 + r2, 2);

        // algorithm
        if (x1 == x2 && y1 == y2) {  // same position
            if (r1 == r2) {          // infinity
                cout << -1 << '\n';
                continue;
            }
            else {                  // no contact
                cout << 0 << '\n';
                continue;
            }
        }
        else {
            if (distance < max_r && distance > min_r) {
                cout << 2 << '\n';
                continue;
            }
            else if (distance == max_r || distance == min_r) {
                cout << 1 << '\n';
                continue;
            }
            else {
                cout << 0 << '\n';
                continue;
            }
        }
    }
    return 0;
}