#include <iostream>
using namespace std;

int bit[7];
int vect[7] = { 3, 5, 4, 2, 6, 6, 5 };

int main()
{ 
	int result[7] = { 0 };

	for (int x = 0; x < 7; x++)
	{
		cin >> bit[x];
	}

	for (int x = 0; x < 7; x++)
	{
		if (bit[x] == 1)
		{
			result[x] = vect[x];
		}
	}

	for (int x = 0; x < 7; x++)
	{
		if (result[x] > 0) result[x] = 7;
	}

	for (int x = 0; x < 7; x++)
	{
		cout << result[x];
	}

	return 0;
}