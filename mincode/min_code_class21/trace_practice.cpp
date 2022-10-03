#include <iostream>
using namespace std;

void run(int lev)
{
    // cout << "#";
    if (lev == 2)
    {
        return;
    }
    cout << "#";
    run(lev + 1);
    run(lev + 1);
    int d = 1;
}

int main()
{

    run(0);

    return 0;
}