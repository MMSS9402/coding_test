#include <iostream>
using namespace std;
char arr[2][4] = { "GKG", };

int main() {

	int x, y;
	int bucket[200] = { 0 };

	for (x = 0; x < 3; x++)
	{
		cin >> arr[1][x];
	}

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 3; x++)
		{
			int t = arr[y][x];
			bucket[t]++;
		}
	}

	int flag = 0;
	for (x = 0; x < 200; x++)
	{
		if (bucket[x] >= 3)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "있음";
	else cout << "없음";

	return 0;
}