#include <iostream>
using namespace std;

int main()
{
	int arr[7][4];
	int y, x;
	int index1, index2, index3;
	int t = 1;

	for (y = 0; y < 7; y++)
	{
		for (x = 0; x < 4; x++)
		{
			arr[y][x] = t;
			t++;
		}
	}

	cin >> index1 >> index2 >> index3;
	for (x = 0; x < 4; x++)
	{
		arr[index1][x] = 0;
		arr[index2][x] = 0;
		arr[index3][x] = 0;
	}

	for (y = 0; y < 7; y++)
	{
		for (x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}