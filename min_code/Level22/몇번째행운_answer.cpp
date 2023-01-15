#include <iostream>
#include <cstring>
using namespace std;

char input[10];

char name[10] = "ABCD";
char path[10];
int cnt;

int exitFlag;

int isSame()
{
	for (int i = 0; i < 3; i++)
	{
		if (input[i] != path[i + 1])
		{
			return 0;
		}
	}
	return 1;
}

void run(int level)
{
	if (exitFlag == 1) return;

	if (level == 3)
	{
		cnt++;
		if (isSame() == 1)
		{
			cout << cnt << "번째";
			exitFlag = 1;
		}

		return;
	}

	for (int i = 0; i < 4; i++)
	{
		path[level + 1] = name[i];
		run(level + 1);
		path[level + 1] = 0;
	}
}
int main()
{
	cin >> input;
	run(0);
}