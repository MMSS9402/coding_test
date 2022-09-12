#include <iostream>
using namespace std;

void abc(int x)
{
    cout << x;
    if (x == 4)
    {
        return;
    }
    abc(x + 1);
    cout << x;
}

int main()
{
    abc(0);
}