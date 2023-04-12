#include<iostream>
using namespace std;

char map[5][5];

void init()
{
	int x, y;
	char t = 'A';
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			map[y][x] = t;
			t++;
		}
	}
}

void findChar(int* dy, int* dx, int target)
{
	int x, y;
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			if (map[y][x] == target)
			{
				*dy = y;
				*dx = x;
				return;
			}
		}
	}	
}

int main()
{
	init();

	int dx, dy;
	char ch;
	cin >> ch;

	findChar(&dy, &dx, ch);

	cout << dy - 2 << "," << dx - 2;
}