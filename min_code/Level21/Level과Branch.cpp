#include <iostream>
using namespace std;
int level;
int branch;

void run(int x)
{
    if (x == level)
    {
        return;
    }
    for (int i = 0; i < branch; i++)
    {
        run(x + i);
    }
}

int main()
{
    int level;
    int branch;

    cin >> level;
    cin >> branch;

    run(0);

    return 0;
}