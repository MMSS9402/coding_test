#include <iostream>
using namespace std;

int vect[6] = { 3, 7, 4, 1, 2, 6 };
int univer[2][2];

int isExist(int target)
{
	for (int x = 0; x < 6; x++)
	{
		if (vect[x] == target) return 1;
	}
	return 0;
}

int main()
{
	int x, y;
	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 2; x++)
		{
			cin >> univer[y][x];
		}
	}

	for (y = 0; y < 2; y++)
	{
		for (x = 0; x < 2; x++)
		{
			if (isExist(univer[y][x]) == 1) cout << "OK ";
			else cout << "NO ";
		}
		cout << endl;
	}

	return 0;
}