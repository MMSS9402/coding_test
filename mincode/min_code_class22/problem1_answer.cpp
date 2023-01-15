#include <iostream>
using namespace std;

char name[6] = "ABTRG";
char path[7];
void run(int lev)
{
    if (lev == 4)
    {
        cout << path << "\n";
        return;
    }

    for (int i = 0; i < 5; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    run(0);
    return;
}