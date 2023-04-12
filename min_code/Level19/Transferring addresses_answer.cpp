#include <iostream>
using namespace std;

int arr[2][3];

void getMin(int* dy, int* dx)
{
	int x, y;
	int min = arr[0][0];
	*dy = 0;
	*dx = 0;

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 3; x++)
		{
			if (arr[y][x] < min)
			{
				min = arr[y][x];
				*dy = y;
				*dx = x;
			}
		}
	}
}

void getMax(int* dy, int* dx)
{
	int x, y;
	int max = arr[0][0];
	*dy = 0;
	*dx = 0;

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 3; x++)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				*dy = y;
				*dx = x;
			}
		}
	}
}

int main()
{
	int x, y;
	int maxDy, maxDx;
	int minDy, minDx;

	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 3; y++)
		{
			cin >> arr[x][y];
		}
	}

	getMax(&maxDy, &maxDx);
	getMin(&minDy, &minDx);

	cout << "(" << maxDy << "," << maxDx << ")" << endl;
	cout << "(" << minDy << "," << minDx << ")" << endl;

	return 0;
}