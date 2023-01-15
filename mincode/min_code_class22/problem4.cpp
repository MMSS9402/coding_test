#include <iostream>
using namespace std;

char name[2] = {'O', 'X'};
char path[10];

void run(int lev)
{
    if (lev == 5)
    {
        cout << path << "\n";
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    run(0);
}