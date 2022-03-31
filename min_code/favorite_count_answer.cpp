#include <iostream>
using namespace std;

int main()
{
	char arr[4][5] = { "ABKT", "KFCF", "BBQQ", "TPZF" };
	char c1, c2;
	int count = 0;
	int x, y;
	cin >> c1 >> c2;

	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < 4; x++)
		{
			if (arr[y][x] == c1 || arr[y][x] == c2)
			{
				count++;
			}
		}
	}

	cout << count;

	return 0;
}