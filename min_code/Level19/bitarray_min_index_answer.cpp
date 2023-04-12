#include <iostream>
using namespace std;

int arr[6];
int mask[6] = { 1, 0, 1, 0, 1, 0 };

int main()
{ 
	for (int x = 0; x < 6; x++)
	{
		cin >> arr[x];
	}

	int min = 9999;
	int minIndex;

	for (int x = 0; x < 6; x++)
	{
		if (mask[x] == 1)
		{
			if (arr[x] < min)
			{
				min = arr[x];
				minIndex = x;
			}
		}
	}

	cout << "arr[" << minIndex << "]=" << min << endl;

	return 0;
}