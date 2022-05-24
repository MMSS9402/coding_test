#include<iostream>
using namespace std;
int main() {
	int arr[3][3];
	int bucket[10] = { 0 };
	for (int y = 0; y < 3; y++)
		for (int x = 0; x < 3; x++)
			cin >> arr[y][x];

	for (int y = 0; y < 3; y++)
		for (int x = 0; x < 3; x++)
			bucket[arr[y][x]]++;

	for (int i = 1; i < 10; i++) {
		if (bucket[i] == 0)
			cout << i << ' ';
	}

	return 0;
}