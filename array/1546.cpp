// 평균 조작
// 미완성

#include <iostream>
#include <vector>
#include <algorithm>
#include <typeinfo>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int int_score;
	vector<double> score;
	for (int i = 0; i < N; i++) {
		cin >> int_score;
		score.push_back(int_score);
	}
	sort(score.begin(), score.end());
		
	cout << score[score.size() - 1] << endl;
	
	vector<double> vec_average;
	for (int i = 0; i < score.size(); i++) {
		vec_average[i] = (score[i] / score[score.size() - 1]) * 100;
	}

	return 0;
}