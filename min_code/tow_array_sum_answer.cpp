#include<iostream>
using namespace std;

int main()
{
	int arrA[4];
	int arrB[4];

	for (int i = 0; i < 4; i++) {
		cin >> arrA[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> arrB[i];
	}

	int res[4];

	int t = 3; 
	for (int i = 0; i < 4; i++) {
		res[i] = arrA[i] + arrB[t];
		t--;
	}

	for (int i = 0; i < 4; i++) {
		cout << res[i] << " ";
	}
	return 0;
}