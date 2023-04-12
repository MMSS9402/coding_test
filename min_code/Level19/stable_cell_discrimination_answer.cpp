#include <iostream>
using namespace std;

int map[5][4];

int isStable(int y, int x)
{
    int direct[8][2] =
        {
            -1, -1,
            -1, 0,
            -1, 1,
            0, -1,
            0, 1,
            1, -1,
            1, 0,
            1, 1};

    int dy, dx, t;
    for (t = 0; t < 8; t++)
    {
        dy = y + direct[t][0];
        dx = x + direct[t][1];
        if (dy >= 0 && dy < 5 && dx >= 0 && dx < 4)
        {
            if (map[dy][dx] == 1)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int x, y;

    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 4; x++)
        {
            cin >> map[y][x];
        }
    }

    int flag = 0;
    for (y = 0; y < 5; y++)
    {
        for (x = 0; x < 4; x++)
        {
            //불안정된 곳을 찾았다면 flag = 1
            if (map[y][x] == 1 && isStable(y, x) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 0)
        cout << "안정된 상태";
    else
        cout << "불안정한 상태";

    return 0;
}