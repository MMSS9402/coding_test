#include <iostream>
using namespace std;

int main()
{
    int m1[4][4], m2[4][4];

    int x, y;
    for (y = 0; y < 4; y++)
    {
        for (x = 0; x < 4; x++)
        {
            cin >> m1[y][x];
        }
    }
    for (y = 0; y < 4; y++)
    {
        for (x = 0; x < 4; x++)
        {
            cin >> m2[y][x];
        }
    }

    int flag = 0;
    for (y = 0; y < 4; y++)
    {
        for (x = 0; x < 4; x++)
        {
            if (m1[y][x] == 1 && m2[y][x] == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 0)
        cout << "걸리지않는다";
    else
        cout << "걸리다";

    return 0;
}