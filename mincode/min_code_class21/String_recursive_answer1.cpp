#include <iostream>
using namespace std;

char path[3];
void run(int lev)
{
    if (lev == 2)
    {
        cout << path << endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        path[lev] = 'A' + i;
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    run(0);
}