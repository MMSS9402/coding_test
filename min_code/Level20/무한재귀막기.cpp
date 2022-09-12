#include <iostream>
using namespace std;

void bbq(int x)
{
    if (x == 3)
    {
        return;
    }
    bbq(x + 1);
}

int main()
{
    bbq(0);
}