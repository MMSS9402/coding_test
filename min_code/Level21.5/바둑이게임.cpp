#include <iostream>
using namespace std;

int main()
{
    int arr1[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 1, 0, 0},
        {0, 1, 2, 0, 2, 1, 0},
        {0, 0, 1, 2, 1, 0, 0},
        {0, 0, 2, 1, 0, 1, 0},
        {0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}};

    int target[4][2] = {
        {0, 1},
        {1, 0},
        {0, -1},
        {-1, 0}};

    int x, y;
    int flag = 1;
    int count = 0;
    cin >> x >> y;

    arr1[x][y] = 1;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            flag = 1;
            if (arr1[i][j] != 2)
                continue;
            if (arr1[i][j] == 2)
            {
                for (int t = 0; t < 4; t++)
                {
                    int dx = i + target[t][0];
                    int dy = j + target[t][1];
                    if (dx >= 0 && dx < 7 && dy >= 0 && dy < 7)
                    {
                        if (arr1[dx][dy] != 1)
                        {
                            flag = 0;
                            continue;
                        }
                    }
                }
                if (flag)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}
