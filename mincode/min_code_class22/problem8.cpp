#include <iostream>
using namespace std;

int arr[5] = {4, 5, 1, 9, -6};
char cor[2] = {'O', 'X'};
int path[3];
int flag = 0;

void run(int lev, int sum)
{
    if (lev == 3)
    {
        cout << sum;
        if (sum == 12)
        {
            flag = 1;
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        run(lev + 1, sum + arr[i]);
        if (flag)
            return;
    }
}

int main()
{
    run(0, 0);
    if (flag)
    {
        cout << 'O';
    }
    else
    {
        cout << "X";
    }
    return 0;
}