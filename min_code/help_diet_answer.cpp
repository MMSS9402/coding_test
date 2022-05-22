#include <iostream>
using namespace std;

int levelTable[4][2] =
{
	10, 20,
	30, 60,
	100, 150,
	200, 300,
};

int main()
{ 
	int input[6];
	int x, y;

	for (x = 0; x < 6; x++)
	{
		cin >> input[x];
	}

	int cnt;
	for (y = 0; y < 4; y++)
	{
		cnt = 0;
		for (x = 0; x < 6; x++)
		{
			if (levelTable[y][0] <= input[x] && input[x] <= levelTable[y][1])
			{
				cnt++;
			}
		}

		cout << "lev" << y << ":" << cnt << endl;
	}

	return 0;
}