#include<iostream>
using namespace std;

int main()
{
	char arr[6][3];
	char t = 'A';
	for (int x = 2; x >= 0; x--) {
		for (int y = 5; y >= 0; y--) {
			arr[y][x] = t;
			t++; 
		}
	}

	int a, b;
	cin >> a >> b; 
	cout << arr[a][b];

	return 0;
}