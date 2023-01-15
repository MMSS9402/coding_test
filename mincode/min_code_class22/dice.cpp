#include <iostream>
using namespace std;
int path[3];

void run(int x)
{
    if (x == 3)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << path[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        path[x] = i + 1;
        run(x + 1);
        path[x] = 0;
    }
}

int main()
{
    run(0);
    return 0;
}