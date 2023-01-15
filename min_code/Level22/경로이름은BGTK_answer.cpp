#include <iostream>

using namespace std;

char name[4] = {'B', 'G', 'T', 'K'};
char path[5];

void run(int lev, int n)
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
    for (int i = 0; i < 4; i++)
    {
        path[lev] = name[i];
        run(lev + 1, n);
        path[lev] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    run(0, n);
}