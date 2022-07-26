// 제로
// 
// 첫 줄에 정수 K
// 이후 K개의 정수가 1개씩 주어진다
//	정수가 0일 경우에는 가장 최근에 쓴 수를 지우고, 아닐 경우 해당 수를 쓴다
//	정수가 0일 경우에 지울 수 있는 수가 있음을 보장할 수 있다
// 
// 재민이가 최종적으로 적어낸 수의 합을 출력한다.
// 최종적으로 적어낸 수의 합은 2^31 - 1 보다 작거나 같은 정수
// 
// 
// 숫자를 입력 받고, 이것을 vector 등에 저장해놓고
// 입력이 0이면 pop_back() 실행하면 될듯?
// 
// 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int K;
	cin >> K;
	vector<int> my_vector;

	for (int i = 0; i < K; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			my_vector.pop_back();
		}
		else {
			my_vector.push_back(num);
		}
	}
	int sum = 0;
	for (int j = 0; j < my_vector.size(); j++) {
		sum += my_vector[j];
	}
	cout << sum << '\n';

	return 0;
}