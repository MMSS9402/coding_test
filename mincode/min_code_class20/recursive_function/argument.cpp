#include <iostream>
using namespace std;

void abc(int x)
{
    if (x == 2)
        return;
    cout << x;
    abc(x + 1);
    cout << x;

    int d = 1;
}

int main()
{
    abc(0);

    return 0;
}