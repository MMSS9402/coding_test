#include <iostream>

using namespace std;

int number[10];
int path[4];

void run(int lev, int n)
{
    if (lev == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            cout << path[i];
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        path[lev] = number[i];
        run(lev + 1, n);
        path[lev] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        number[i] = i + 1;
    }
    run(0, n);

    return 0;
}