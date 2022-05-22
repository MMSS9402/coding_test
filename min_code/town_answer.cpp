#include <iostream>
using namespace std;

int main()
{
	char vect[7] = "BTKIGZ";
	char target[4];

	for (int i = 0; i < 4; i++) {
		cin >> target[i];
	}

	int cnt = 0;

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 6; x++) {
			if (vect[x] == target[y]) {
				cnt++;
				break;
			}
		}
	}
	
	cout << cnt;

	return 0;
}