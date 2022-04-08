// 알파벳 찾기
// 미해결

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char input[100];
	int alphabet[26] = { 0 };
	cin >> input;

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(input); j++) {
			cout << "input : " << int(input[j]) << endl;
			cout << "alphabet : " << alphabet[i] + 97 + i << endl;
			
		}
	}

	return 0;
}