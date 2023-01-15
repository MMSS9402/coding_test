#include <iostream>
using namespace std;

int path[5];

void run(int lev, int i)
{

    if (lev == i)
    {
        for (int k = 0; k < lev; k++)
        {
            cout << path[k];
        }
        cout << endl;
        return;
    }

    for (int j = 0; j < 10; j++)
    {
        path[lev] = j;
        run(lev + 1, i);
        path[lev] = 0;
    }
}

int main()
{
    run(0, 3);
    run(0, 4);
    run(0, 5);
    return 0;
}