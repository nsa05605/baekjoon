// 피보나치 함수
// 
// fibonacci 함수를 호출할 때
// fibonacci(0)과 fibonacci(1)이 호출되는 숫자를 출력
// https://hongku.tistory.com/161

/*
#include <iostream>
#include <time.h>
using namespace std;

class Fibonacci
{
public:
	int m_zero = 0;
	int m_one = 0;

public:
	Fibonacci() {}
	~Fibonacci() {}

	int fibonacci(int n) {
		if (n == 0) {
			m_zero++;
			return 0;
		}
		else if (n == 1) {
			m_one++;
			return 0;
		}
		else {
			return fibonacci(n - 1) + fibonacci(n - 2);
		}
	}
};

int main()
{
	clock_t start, finish;
	double duration;

	int T;
	cin >> T;

	start = clock();

	for (int i = 0; i < T; i++) {
		Fibonacci fibo;
		int num;
		cin >> num;
		fibo.fibonacci(num);

		cout << fibo.m_zero << " " << fibo.m_one << endl;
	}

	finish = clock();
	duration = (double)(finish - start);
	cout << duration << " ms" << endl;

	return 0;
}

*/


// Fibonacci 다른 방법
// 
// memory를 만들어서 fibonacci(i) 값을 저장하는 방법이 있음
// memory를 vector로 만들고
// fibonacci 함수에서 새롭게 계산을 하면 memory에 추가하고
// 이전에 계산한 값이면 memory에서 불러오면 될듯
// 
// 

#include <iostream>
#include <vector>
using namespace std;

vector<int> memory(50);		// 모두 0으로 initialize

int Fibonacci(int num, int &count) {
	if (num == 0) {
		memory[0] = 0;
		return 0;
	}
	else if (num == 1) {
		memory[1] = 1;
		return 1;
	}
	else if (memory[num - 1] != 0) {	// 이미 계산한 값(vector에 있는 값)과 같다면? ex_ num = 2
		// 원래 Fibo(1) + Fibo(0) 인데
		// momory[num-1] + memory[num-2] 가 된다.
		// 하지만 이때 memory[num-2]가 존재해야 함
		if ()
		

	}
	else {
		//return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int main()
{
	int count = 0;
	memory.push_back(0);
	memory.push_back(1);




	return 0;
}