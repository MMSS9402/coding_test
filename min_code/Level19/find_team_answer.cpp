#include <iostream>
using namespace std;

int train[8] = { 3,7,6,4,2,9,1,7 };
int team[3];

int isTeam(int index)
{
	int x;
	for (int x = 0; x < 3; x++)
	{
		if (team[x] != train[index + x]) return 0;
	}
	return 1;
}

int main() {

	int i;
	int x, y;

	for (i = 0; i < 3; i++) {
		cin >> team[i];
	}

	int ret;
	int start;

	for (i = 0; i <= 5; i++)
	{
		ret = isTeam(i);
		if (ret == 1)
		{
			start = i;
			break;
		}
	}

	cout << start << "번~" << start + 2 << "번 칸";



	return 0;

}