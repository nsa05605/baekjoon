// 영화 평가
// 
// N명의 구성원
// 0 ~ 100 점으로 평가
// 최종 평점은 가장 낮은 평가 L개와 가장 높은 평가 H개를 뺀 나머지 점수의 평균
// 
// 첫 줄에 입력으로 N, L H
// 이후 각 구성원의 평가 점수
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
	for (int j = 0; j < H; j++) {	// 높은 점수부터 H번 삭제
		vec_score.pop_back();
	}
	sort(vec_score.begin(), vec_score.end(),greater<>());
	for (int k = 0; k < L; k++) {	// 낮은 점수부터 L번 삭제
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