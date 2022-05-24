// 덩치
// 
// 입력으로 인원수 N
// 각 사람의 몸무게 x, 키 y
// x_i > x_j && y_i > y_j 이면 덩치가 더 크다
// 둘 중 하나만 만족하면 동점
// 등수는 자신보다 덩치가 큰 사람의 수 + 1
// 
// 55	185		2
// 58	183		2
// 88	186		1
// 56	175		3
// 46	155		5
// 
// Person class를 만들고
// 각 사람들의 몸무게와 키 입력값으로 person을 생성해서 vector에 입력 
// 
// 
// 
#include <iostream>
#include <vector>
using namespace std;

class Person
{
public:	// variables
	int m_weight;	// 몸무게
	int m_height;	// 키

public:	// constructor
	Person(int x, int y) {	// 생성할 때 몸무게와 키를 넣어줌
		m_weight = x;
		m_height = y;
	}

public:	// methods
	
};

int main()
{
	int N;
	cin >> N;
	vector<Person> vec_person;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		Person person(x, y);
		vec_person.push_back(person);
	}
	for (int i = 0; i < vec_person.size(); i++) {
		int rank = 1;
		for (int j = 0; j < vec_person.size(); j++) {
			if (vec_person[i].m_height < vec_person[j].m_height &&
				vec_person[i].m_weight < vec_person[j].m_weight) {	// 키와 몸무게 모두 작다면
				rank++;		// 순위에 +1
			}
		}
		cout << rank << " ";
	}
	
	return 0;
}