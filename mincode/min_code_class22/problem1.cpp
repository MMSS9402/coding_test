#include <iostream>

using namespace std;

int path[4];

void run(int lev)
{
    if (lev == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (path[i] == 1)
            {
                cout << 'A';
            }
            if (path[i] == 2)
            {
                cout << 'B';
            }
            if (path[i] == 3)
            {
                cout << 'T';
            }
            if (path[i] == 4)
            {
                cout << 'R';
            }
            if (path[i] == 5)
            {
                cout << 'G';
            }
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 5; i++)
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