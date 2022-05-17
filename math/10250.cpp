// ACM ȣ��
// 
// ȣ�� �������� �ȴ� �Ÿ��� ���� ª�� ���� ��ȣ
// ���������ʹ� ���� ���ʿ� �ְ�
// W x H ���� ���� �ִ� ����
// ȣ�� ������ 1�� ���������� �ٷ� ��
// 
// ���ȣ�� YXX or YYXX ���� ( ex_ 12�� 3ȣ = 1203 )
// XX�� �Ÿ��� ª�� ���� ��ȣ�ϴµ�
// XX�� ���ٸ� YY�� ª�� ���� ��ȣ
// 
// �Է��� T ���� �׽�Ʈ ������ �Է� ��
// H, W, N ������ T�� �Է�

#include <iostream>
#include <vector>
using namespace std;

int ComputeRoomNumber(int H, int W, int N, vector<int> &vec_room) {	// ���ȣ�� ����ϴ� �Լ�
	int room_number;
	int count = 0;
	for (int i = 1; i <= W; i++) {
		for (int j = 1; j <= H; j++) {
			room_number = j * 100 + i;	// ���ȣ�� ����(H)���� �ð�, ���� H��ŭ �ö󰡸� W++
			count++;
			if (count == N) { 
				vec_room.push_back(room_number);
				return 0;
			}
		}
	}
	return 0;
}

int main()
{
	int T, H, W, N;
	cin >> T;
	vector<int> Vec_room;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		ComputeRoomNumber(H, W, N, Vec_room);
	}

	for (int i = 0; i < Vec_room.size(); i++) {
		cout << Vec_room[i] << "\n";
	}

	return 0;
}