#include <iostream>
using namespace std;

int isExist(int arr[3][3], int input)
{
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (arr[y][x] == input) {
				return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = {
		3,5,9,
		4,2,1,
		5,1,5
	};
	int target[3];
	cin >> target[0] >> target[1] >> target[2];

	for (int i = 0; i < 3; i++) {
		if (isExist(arr,target[i]) == 1) {
			cout << target[i] << ":존재" << endl;
		}
		else {
			cout << target[i] << ":미발견" << endl;
		}
	}

	return 0;
}