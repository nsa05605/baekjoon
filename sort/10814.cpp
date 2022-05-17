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
#include <map>
using namespace std;

class Person
{
public:		// variables
	int m_age;
	string m_name;

public:		// constructor
	Person() {}
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

int SortVector(vector<Person>& vec_p, map<int, Person>& map_p) {
	int count = 1;

	for (int i = 0; i < 200; i++) {
		if (count > vec_p.size()) {	// �۾� �Ϸ������� ����
			return 0;
		}
		for (int j = 0; j < vec_p.size(); j++) {
			if (vec_p[j].GetAge() == i) {	// age�� i�� ������
				map_p.insert({ count, vec_p[j] });	// map_p�� �ְ�
				count++;
			}
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
	map<int, Person> map_person;
	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		Person per(age, name);
		vec_person.push_back(per);
	}
	SortVector(vec_person, map_person);

	for (int i = 1; i <= vec_person.size(); i++) {
		cout << map_person[i].GetAge() << " " << map_person[i].GetName() << "\n";
	}


	return 0;
}