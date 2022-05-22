#include <iostream>
using namespace std;

char vect[2][4] =
{
	"GKT",
	"PAC",
};

int isExist(char ch)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (vect[y][x] == ch)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	char ch1, ch2;

	cin >> ch1 >> ch2;

	int a, b;
	
	a = isExist(ch1);
	b = isExist(ch2);

	if (a == 1 && b == 1)
	{
		cout << "대발견";
	}
	else if (a == 0 && b == 0)
	{
		cout << "미발견";
	}
	else
	{
		cout << "중발견";
	}
	
	return 0;
}