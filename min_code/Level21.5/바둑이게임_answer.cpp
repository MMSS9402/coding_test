#include <iostream>
using namespace std;

//X : 흰돌
//O : 검은돌
char vect[7][8] =
{
	"_______",
	"__X_X__",
	"_XO_OX_",
	"__XOX__",
	"__OX_X_",
	"_XX____",
	"_______",
};

//검은돌 기준으로 잡아 먹히는지 아닌지 확인해주는 함수
int isPossibleEat(int by, int bx)
{
	int direct[4][2] = { -1, 0, 1, 0, 0, 1, 0, -1 };
	int dy, dx;
	int t;

	for (t = 0; t < 4; t++)
	{
		dy = by + direct[t][0];
		dx = bx + direct[t][1];

		if (dy < 0 || dx < 0 || dy >= 7 || dx >= 7) return 0;
		if (vect[dy][dx] != 'X') return 0;
	}

	return 1;
}

int main()
{
	int whiteY, whiteX;

	cin >> whiteY >> whiteX;
	vect[whiteY][whiteX] = 'X';

	int x, y;
	int cnt = 0;

	for (y = 0; y < 7; y++)
	{
		for (x = 0; x < 7; x++)
		{
			if (vect[y][x] == 'O') {
				int ret = isPossibleEat(y, x);
				if (ret == 1) cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}