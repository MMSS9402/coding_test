#include <iostream>
using namespace std;

int main()
{
	int mask1[4][4] = {
		0,0,0,1,
		1,1,0,1,
		1,0,0,1,
		1,1,1,1
	};
	int mask2[4][4] = {
		1,1,1,1,
		1,0,1,1,
		1,0,0,0,
		1,0,0,0
	};
	int result[4][4] = { 0 };
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (mask1[y][x] == 1 || mask2[y][x] == 1) {
				result[y][x] = 1;
			}
		}
	}
	for (int y = 0; y < 4; y++) {	
		for (int x = 0; x < 4; x++) {
			if (result[y][x]==0) {
				cout << "(" << y << "," << x << ")" << endl;
			}
		}
	}

	return 0;
}