// ���̼� ����
// 
// ������ ������� ���̿� �̸��� �־����µ�
// ȸ������ ���̰� �����ϴ� ������ ����
// ���̰� ������ ���� ������ ����� ������
// 
// ù° �ٿ� ȸ�� �� N�� �־�����
// ��° �ٺ��ʹ� ���̿� �̸��� �־�����
// ���̴� 1~200
// �̸��� 100�� ����
//

#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

class Person
{
public:		// variables
	int m_age;
	string m_name;

public:		// constructor
	Person(int age, string name) {
		m_age = age;
		m_name = name;
	}

public:		// method
	int GetAge() {
		return m_age;
	}
	string GetName() {
		return m_name;
	}
};

void SortVector(vector<Person>& vec_p) {
	int count = 0;
	for (int i = 0; i < 200; i++) {
		if (count == vec_p.size()) {	// �۾� �Ϸ������� ����
			break;
		}
		

	}
}

int main()
{
	int N;		// �� �ο�
	cin >> N;
	int age;
	string name;

	vector<Person> vec_person;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		Person per(age, name);
		vec_person.push_back(per);
	}
	
	
	
	return 0;
}