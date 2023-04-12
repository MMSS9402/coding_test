#include <iostream>
using namespace std;

int main()
{
	char arr[3][5] =
	{
		"ATKB",
		"CZFD",
		"HGEI"
	};
	int x, y;
	int dx, dy;
	int offsetDx, offsetDy;
	char input;

	cin >> input;
	cin >> offsetDy >> offsetDx;
	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 4; x++)
		{
			if (arr[y][x] == input)
			{
				dx = x;
				dy = y;
			}
		}
	}

	cout << arr[dy + offsetDy][dx + offsetDx];

	return 0;
}