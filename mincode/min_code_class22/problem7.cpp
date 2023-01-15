#include <iostream>
#include <cstring>
using namespace std;

int arr[4][3] = {
    {1, 3, -5},
    {-7, 3, 4},
    {-2, -5, -9},
    {5, 5, 4}};

int path[4];

int max1 = 0;

void run(int lev, int mul)
{
    if (lev == 4)
    {
        for (int k = 0; k < 4; k++)
        {
            cout << path[k] << " ";
        }
        cout << "=" << mul;
        if (mul >= max1)
        {
            max1 = mul;
        }
        cout << endl;
        cout << "큰 값은??"
             << ":" << max1 << " ";
        return;
    }

    for (int j = 0; j < 3; j++)
    {
        path[lev] = arr[lev][j];
        int mul2 = mul * arr[lev][j];
        run(lev + 1, mul2);
        path[lev] = 0;
        mul2 = mul;
    }
}

int main()
{
    run(0, 1);
}