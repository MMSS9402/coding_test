#include <iostream>
using namespace std;

char path[2];

void run(int lev)
{
    if (lev == 2)
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
        path[lev] = char(i + 65);
        run(lev + 1);
        path[lev] = '\0';
    }
}

int main()
{
    run(0);
    return 0;
}