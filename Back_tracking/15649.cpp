// 미완성
// N과 M(1)
// 
// 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램
// 1부터 N까지 자연수 중 중복 없이 M개를 고른 수열
// 
// 우선 수열의 개수는 N * (N - 1) * (N - 2) * (N - 3) ...
// M번 반복
// 
// N이 들어오면
// 1~N 까지의 vector를 만들고


#include <iostream>
#include <vector>
using namespace std;

void PrintArray(vector<int> number) {



}

int main()
{
	int N, M;
	cin >> N >> M;
	bool used[9] = { false };
	vector<int> number = { 1,2,3,4,5,6,7,8 };
	
	number.resize(N);
	
	for (int i = 0; i < number.size(); i++) {
		for (int j = 0; j < number.size(); j++) {
			if (i != j) {
				cout << number[i] << " " << number[j] << endl;
			}
		}
	}
	

	return 0;
}