#include <iostream>
using namespace std;

int path[3];
void run(int lev)
{
    if (lev == 3)
    {
        for (int i = 0; i < 2; i++)
        {
            cout << path[i];
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        path[lev] = i + 1;
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    run(0);

    return 0;
}