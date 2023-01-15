#include <iostream>
#include <cstring>
using namespace std;

int arr[3][4] = {
    {4, 5, 1, 9},
    {9, 5, 3, 3},
    {4, 4, 5, 6}};
int path[3];
int sum = 0;
int j = 0;

void run(int lev, int sum)
{
    if (lev == 3)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << path[k] << " ";
        }
        cout << "=" << sum;
        cout << endl;
        sum = 0;
        return;
    }

    for (int j = 0; j < 4; j++)
    {
        path[lev] = arr[lev][j];
        run(lev + 1, sum + arr[lev][j]);
        path[lev] = 0;
    }
}

int main()
{
    run(0, 0);
}