// ��ȭ ��
// 
// N���� ������
// 0 ~ 100 ������ ��
// ���� ������ ���� ���� �� L���� ���� ���� �� H���� �� ������ ������ ���
// 
// ù �ٿ� �Է����� N, L H
// ���� �� �������� �� ����
// 
// 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, L, H;
int score;
vector<int> vec_score;

int main()
{
	cin >> N >> L >> H;
	for (int i = 0; i < N; i++) {
		cin >> score;
		vec_score.push_back(score);
	}
	sort(vec_score.begin(), vec_score.end());
	for (int j = 0; j < H; j++) {	// ���� �������� H�� ����
		vec_score.pop_back();
	}
	sort(vec_score.begin(), vec_score.end(),greater<>());
	for (int k = 0; k < L; k++) {	// ���� �������� L�� ����
		vec_score.pop_back();
	}
	double sum = 0;
	for (int s = 0; s < vec_score.size(); s++) {
		sum += vec_score[s];
	}
	double avg = sum / vec_score.size();
	cout.precision(10);
	cout << avg << '\n';

	return 0;
}