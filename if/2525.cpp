// ¿Àºì ½Ã°è

#include <iostream>
using namespace std;
int main()
{
	int h, m;
	int m_fin;
	cin >> h >> m;
	cin >> m_fin;
	if ((m + m_fin) >= 60)
		if ((h + ((m + m_fin) / 60)) >= 24)
			cout << (h + ((m + m_fin) / 60)) - 24 << " " << ((m + m_fin) % 60) << endl;
		else
			cout << (h + ((m + m_fin) / 60)) << " " << ((m + m_fin) % 60) << endl;
	else
		cout << h << " " << (m + m_fin) << endl;
	return 0;
}