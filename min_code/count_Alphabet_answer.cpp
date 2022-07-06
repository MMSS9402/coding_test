#include<iostream>
using namespace std;

int main()
{
	char str[11];
	int len;
	int x;
	int bucket[200] = { 0 };

	int max;
	int maxIndex;

	cin >> str;
	for (x = 0; x < 11; x++)
	{
		if (str[x] == '\0')
		{
			len = x;
			break;
		}
	}

	for (x = 0; x < len; x++)
	{
		bucket[str[x]]++;
	}

	max = 0;
	for (x = 0; x < 200; x++)
	{
		if (bucket[x] > max)
		{
			max = bucket[x];
			maxIndex = x;
		}
	}

	cout << (char)(maxIndex);

}