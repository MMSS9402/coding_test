#include<iostream>
using namespace std;

int apart[5][3] =
{
	15, 18, 17,
	4, 6, 9,
	10, 1, 3,
	7, 8, 9,
	15, 2, 6
};

int family[3];

int isPattern(int line)
{
	for (int i = 0; i < 3; i++)
	{
		if (family[i] != apart[line][i]) return 0;
	}
	return 1;
}

int main()
{
	cin >> family[0] >> family[1] >> family[2];

	int i;
	int ret = 0;

	for (i = 0; i < 5; i++)
	{
		int ret = isPattern(i);

		if (ret == 1) break;
	}

	cout << 5 - i << "층";
}
