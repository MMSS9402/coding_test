#include <iostream>
using namespace std;

int map[3][3] =
    {
        3,
        5,
        1,
        3,
        8,
        1,
        1,
        1,
        5,
};

int bitarray[2][2];

int getSum(int dx, int dy)
{
    int x, y;
    int sum = 0;

    for (y = 0; y < 2; y++)
    {
        for (x = 0; x < 2; x++)
        {
            if (bitarray[y][x] == 1)
            {
                sum += map[dy + y][dx + x];
            }
        }
    }
    return sum;
}

int main()
{
    int x, y;

    for (y = 0; y < 2; y++)
    {
        for (x = 0; x < 2; x++)
        {
            cin >> bitarray[y][x];
        }
    }

    int sum = 0;
    int max = -9999;
    int mx, my;

    for (y = 0; y < 2; y++)
    {
        for (x = 0; x < 2; x++)
        {
            sum = getSum(x, y);
            if (sum > max)
            {
                max = sum;
                mx = x;
                my = y;
            }
        }
    }

    cout << "(" << my << "," << mx << ")";

    return 0;
}