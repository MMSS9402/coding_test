#include <iostream>
using namespace std;

char arr[11];

char getMaxIndex()
{
	int x;
	char maxVal = arr[0];
	int index = 0;
	for (x = 0; x < 11; x++)
	{
		if (arr[x] == '\0') break;
		if (maxVal < arr[x])
		{
			maxVal = arr[x];
			index = x;
		}
	}

	return index;
}

char getMinIndex()
{
	int x;
	char minVal = arr[0];
	int index = 0;
	for (x = 0; x < 11; x++)
	{
		if (arr[x] == '\0') break;
		if (minVal > arr[x])
		{
			minVal = arr[x];
			index = x;
		}
	}

	return index;

}

int main()
{
	int maxIndex, minIndex;
	cin >> arr;

	maxIndex = getMaxIndex();
	minIndex = getMinIndex();

	cout << maxIndex << endl;
	cout << minIndex << endl;


	return 0;
}