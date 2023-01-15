#include <iostream>

using namespace std;

char path[3];
char name[4] = {'A', 'B', 'C', 'D'};
int c = 0;
void run(int lev, char a[3])
{
    if (lev == 3)
    {
        int flag = 1;
        for (int i = 0; i < 3; i++)
        {
            if (path[i] != a[i])
            {
                flag = 0;
            }
        }
        c++;
        if (flag == 1)
        {
            cout << c << "번째";
        }

        return;
    }
    for (int i = 0; i < 4; i++)
    {
        path[lev] = name[i];
        run(lev + 1, a);
        path[lev] = 0;
    }
}

int main()
{
    char a[3];

    cin >> a;

    run(0, a);

    return 0;
}