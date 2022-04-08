// ÃÖ´ñ°ª

#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 9> my_array;
	int seq = 1, max = 0;
	for (int i = 0; i < 9; ++i){
		cin >> my_array[i];
	}
	for (int i = 0; i < 9; ++i) {
		if (my_array[i] > max) {
			max = my_array[i];
			seq = i + 1;
		}
	}
	cout << max << endl;
	cout << seq << endl;
}