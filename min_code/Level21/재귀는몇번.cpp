#include <iostream>
using namespace std;

int level;
int branch;
int c;

void run(int x)
{
    c = c + 1;
    if (x == level)
    {
        return;
    }
    for (int i = 0; i < branch; i++)
    {
        run(x + 1);
    }
}

int main()
{
    cin >> branch;
    cin >> level;

    run(0);

    cout << c;
    return 0;
}