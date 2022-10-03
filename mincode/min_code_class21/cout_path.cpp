#include <iostream>
using namespace std;

int path[2];
void run(int lev)
{
    if (lev == 2)
    {
        for (int i = 0; i < lev; i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[lev] = i + 1;
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    run(0);
}