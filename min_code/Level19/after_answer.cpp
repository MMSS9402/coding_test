#include <iostream>
using namespace std;

int main()
{
	int input;
	int flag = 0;
	int value[2][5] = {
		3,5,4,1,1,
		3,5,2,5,6
	};
	int mask[2][5] = {
		0,0,1,0,0,
		0,0,1,1,1
	};

	cin >> input;
	flag = 0;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 5; x++) {
			if (mask[y][x] == 1 && value[y][x] == input) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}

	if (flag == 1) {
		cout << input << " 존재";
	}
	else {
		cout << input << " 없음";
	}

	return 0;
}