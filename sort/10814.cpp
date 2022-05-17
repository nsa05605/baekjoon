// 나이순 정렬
// 
// 가입한 사람들의 나이와 이름이 주어지는데
// 회원들을 나이가 증가하는 순으로 정렬
// 나이가 같으면 먼저 가입한 사람이 앞으로
// 
// 첫째 줄에 회원 수 N이 주어지고
// 둘째 줄부터는 나이와 이름이 주어진다
// 나이는 1~200
// 이름은 100자 이하
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
		if (count > vec_p.size()) {	// 작업 완료했으면 종료
			return 0;
		}
		for (int j = 0; j < vec_p.size(); j++) {
			if (vec_p[j].GetAge() == i) {	// age가 i와 같으면
				map_p.insert({ count, vec_p[j] });	// map_p에 넣고
				count++;
			}
		}
	}
}

int main()
{
	int N;		// 총 인원
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