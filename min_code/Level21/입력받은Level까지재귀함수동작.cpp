#include <iostream>
using namespace std;

int level;

void run(int x)
{
    cout << x;
    if (x == level)
    {
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        run(x + 1);
    }
}

int main()
{
    cin >> level;

    run(0);

    return 0;
}