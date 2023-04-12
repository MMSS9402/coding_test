#include <iostream>
using namespace std;

int map[3][3] = {
    3, 5, 1,
    3, 8, 1,
    1, 1, 5};

int masking(int x, int y, int bitarray[2][2])
{
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int dx = x + i;
            int dy = y + j;
            if (bitarray[i][j] != 0)
            {
                sum += map[dx][dy];
            }
        }
    }
    return sum;
}

int main()
{
    int bitarray[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> bitarray[i][j];
        }
    }
    int max = -1;
    int max_idx = -1;
    int max_idy = -1;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (masking(i, j, bitarray) > max)
            {
                max = masking(i, j, bitarray);
                max_idx = i;
                max_idy = j;
            }
        }
    }
    cout << "(" << max_idx << "," << max_idy << ")";
}