#include <iostream>
using namespace std;

int main()
{
    int MAP[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> MAP[i][j];
        }
    }
    int direct[8][2] = {
        0, 1,
        0, -1,
        1, 0,
        -1, 0,
        1, -1,
        1, 1,
        -1, 1,
        -1, -1};
    int flag = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (MAP[i][j] == 1)
            {
                for (int t = 0; t < 8; t++)
                {
                    int dx = i + direct[t][0];
                    int dy = j + direct[t][1];
                    if (MAP[dx][dy] == 1 && dx >= 0 && dx <= 5 && dy >= 0 && dy < 4)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
    }
    if (flag)
        cout << "안정된 상태";
    else
        cout << "불안정한 상태";
}