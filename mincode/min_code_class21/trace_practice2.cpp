#include <iostream>
using namespace std;

void run(int lev)
{
    if (lev == 2)
    {
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        run(lev + 1);
    }
    int d = 1;
}

int main()
{

    run(0);

    return 0;
}