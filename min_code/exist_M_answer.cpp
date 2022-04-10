#include<iostream>
using namespace std;

int main()
{
	char arr[3][11];
	cin >> arr[0] >> arr[1] >> arr[2]; 

	int flag = 0; 
	for (int y = 0; y < 3; y++) 
	{
		for (int x = 0; x < 10; x++) {
			if (arr[y][x] == '\0') break; 
			if (arr[y][x] == 'M') {
				flag = 1; 
				break; 
			}
		}
		if (flag == 1) break; 
	}

	if (flag == 0) {
		cout << "M이 존재하지 않습니다";
	}
	else {
		cout << "M이 존재합니다";
	}
	return 0;
}