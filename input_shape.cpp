#include <iostream>
using namespace std;

int map[3][4] = {
    'A', 'B', 'G', 'K',
    'T', 'T', 'A', 'B',
    'A', 'C', 'C', 'D'};

int isSame(int x, int y, int pattern[2][2])
{
    int flag = true;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int dx = x + i;
            int dy = y + j;
            if (map[dx][dy] != pattern[i][j])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}

int main()
{
    int pattern[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> pattern[i][j];
        }
    }
    int count = 0;
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (isSame(x, y, pattern))
            {
                count++;
            }
        }
    }
    if (count > 0)
    {
        cout << "발견(" << count << "개)";
    }
    else
    {
        cout << "미발견";
    }
}