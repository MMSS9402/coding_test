#include <iostream>
using namespace std;
int n;
void run(int x)
{
    if (x == 2)
    {
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        run(x + 1);
    }
}

int main()
{
    run(0);
}