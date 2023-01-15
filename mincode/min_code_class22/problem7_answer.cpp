#include <iostream>
#include <cstring>
using namespace std;

int maxi = -999999;

int arr[4][3] = {
    {1, 3, -5},
    {-8, 3, 4},
    {-2, -5, -9},
    {5, 5, 4}};

void run(int lev, int gop)
{
    if (lev == 4)
    {
        if (gop > maxi)
            maxi = gop;
    }
    for (int i = 0; i < 3; i++)
    {
        run(lev + 1, gop * arr[lev][i]);
    }
}

int main()
{
    run(0, 1);
    cout << maxi;

    return 0;
}