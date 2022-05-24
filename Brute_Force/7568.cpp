// ��ġ
// 
// �Է����� �ο��� N
// �� ����� ������ x, Ű y
// x_i > x_j && y_i > y_j �̸� ��ġ�� �� ũ��
// �� �� �ϳ��� �����ϸ� ����
// ����� �ڽź��� ��ġ�� ū ����� �� + 1
// 
// 55	185		2
// 58	183		2
// 88	186		1
// 56	175		3
// 46	155		5
// 
// Person class�� �����
// �� ������� �����Կ� Ű �Է°����� person�� �����ؼ� vector�� �Է� 
// 
// 
// 
#include <iostream>
#include <vector>
using namespace std;

class Person
{
public:	// variables
	int m_weight;	// ������
	int m_height;	// Ű

public:	// constructor
	Person(int x, int y) {	// ������ �� �����Կ� Ű�� �־���
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
				vec_person[i].m_weight < vec_person[j].m_weight) {	// Ű�� ������ ��� �۴ٸ�
				rank++;		// ������ +1
			}
		}
		cout << rank << " ";
	}
	
	return 0;
}