#include <iostream>
using namespace std;

int vect[3][3] = {
	3,7,4,
	2,2,4,
	2,2,5
};

int getCount(int target)
{
	int x, y;
	int cnt = 0;

	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 3; x++)
		{
			if (vect[y][x] == target) cnt++;
		}
	}

	return cnt;
}
    
int main()
{
	int target[3];

	int ret;
	int max = -1;
	int maxValue;

	cin >> target[0] >> target[1] >> target[2];

	for (int i = 0; i < 3; i++) {

		ret = getCount(target[i]);

		if (ret > max)
		{
			max = ret;
			maxValue = target[i];
		}
	}

	cout << maxValue;

	return 0;
}