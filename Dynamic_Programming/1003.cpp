// �Ǻ���ġ �Լ�
// 
// fibonacci �Լ��� ȣ���� ��
// fibonacci(0)�� fibonacci(1)�� ȣ��Ǵ� ���ڸ� ���
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


// Fibonacci �ٸ� ���
// 
// memory�� ���� fibonacci(i) ���� �����ϴ� ����� ����
// memory�� vector�� �����
// fibonacci �Լ����� ���Ӱ� ����� �ϸ� memory�� �߰��ϰ�
// ������ ����� ���̸� memory���� �ҷ����� �ɵ�
// 
// 

#include <iostream>
#include <vector>
using namespace std;

vector<int> memory(50);		// ��� 0���� initialize

int Fibonacci(int num, int &count) {
	if (num == 0) {
		memory[0] = 0;
		return 0;
	}
	else if (num == 1) {
		memory[1] = 1;
		return 1;
	}
	else if (memory[num - 1] != 0) {	// �̹� ����� ��(vector�� �ִ� ��)�� ���ٸ�? ex_ num = 2
		// ���� Fibo(1) + Fibo(0) �ε�
		// momory[num-1] + memory[num-2] �� �ȴ�.
		// ������ �̶� memory[num-2]�� �����ؾ� ��
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