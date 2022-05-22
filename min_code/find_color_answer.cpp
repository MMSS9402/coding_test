#include <iostream>
using namespace std;

int map[2][3] = {
	3, 55, 42,
	-5, -9, -10,
};

int pix[2][2];

int isExist(int target)
{
	int x, y;

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 3; x++)
		{
			if (map[y][x] == target) return 1;
		}
	}
	return 0;
}

int main()
{ 
	int x, y;
	int pix[2][2];

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 2; x++)
		{
			cin >> pix[y][x];
		}
	}

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 2; x++)
		{
			if (isExist(pix[y][x]) == 1)
			{
				cout << "Y ";
			}
			else
			{
				cout << "N ";
			}
		}
		cout << endl;
	}

	return 0;
}