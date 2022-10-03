#include <iostream>
using namespace std;
int n = 4;

int path[10];

void run(int lev)
{
    if (lev == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << path[i];
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < 3; i++)
    {
        path[lev] = i + 1;
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    // cin >> n;
    run(0);
    return 0;
}