// �躸��
// 
// ���� ���� ����� ��ܰ�
// ���� ���� ����� ����� �־�����
// 
// �赵 ���� ���� ����� ���
// 
// ù° �ٿ� �赵 ���� ��� N, ���� ���� ��� M�� �־�����
// ��° �ٺ��� �赵 ���� ����� �̸��� ���� ���� ����� �̸��� ������� �־�����
// �̸��� ���ĺ� �ҹ��ڷ� 20�� ����
// �ߺ��̸� ����
// 
// ����� �躸���� ����� ���������� ���



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
		listen.insert({ str, true });	// name�� index, true�� value�� ����
		vec_listen.push_back(str);
	}
	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		see.insert({ str, true });		// name�� index, true�� value�� ����
	}
	for (int i = 0; i < N; i++) {		// ���� ��ܿ� �ִ� ����� �� ��ܿ� �ִٸ�
		if (listen[vec_listen[i]] == see[vec_listen[i]]) {
			vec_result.push_back(vec_listen[i]);	// ��� vector�� �־���
		}
	}
	sort(vec_result.begin(), vec_result.end());	// ���������� ����
	cout << vec_result.size() << '\n';
	for (int i = 0; i < vec_result.size(); i++) {
		cout << vec_result[i] << '\n';
	}

	return 0;
}