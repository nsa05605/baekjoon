// 듣보잡
// 
// 듣지 못한 사람의 명단과
// 보지 못한 사람의 명단이 주어지면
// 
// 듣도 보도 못한 사람의 명단
// 
// 첫째 줄에 듣도 못한 사람 N, 보도 못한 사람 M이 주어진다
// 둘째 줄부터 듣도 못한 사람의 이름과 보도 못한 사람의 이름이 순서대로 주어진다
// 이름은 알파벳 소문자로 20자 이하
// 중복이름 없음
// 
// 출력은 듣보잡의 명단을 사전순으로 출력



#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	map<string, bool> listen;
	map<string, bool> see;
	vector<string> vec_listen;
	vector<string> vec_result;
	
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		listen.insert({ str, true });	// name을 index, true를 value로 설정
		vec_listen.push_back(str);
	}
	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		see.insert({ str, true });		// name을 index, true를 value로 설정
	}
	for (int i = 0; i < N; i++) {		// 들은 명단에 있는 사람이 본 명단에 있다면
		if (listen[vec_listen[i]] == see[vec_listen[i]]) {
			vec_result.push_back(vec_listen[i]);	// 결과 vector에 넣어줌
		}
	}
	sort(vec_result.begin(), vec_result.end());	// 사전순으로 정렬
	cout << vec_result.size() << '\n';
	for (int i = 0; i < vec_result.size(); i++) {
		cout << vec_result[i] << '\n';
	}

	return 0;
}