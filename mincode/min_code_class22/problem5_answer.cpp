#include <iostream>
#include <cstring>
using namespace std;

char name[10] = "ABCD";
int len;
int n = 3;
char path[10];

void run(int lev)
{
    if (lev == n)
    {
        cout << path << endl;
        return;
    }

    for (int i = 0; i < len; i++)
    {
        path[lev] = name[i];
        run(lev + 1);
        path[lev] = 0;
    }
}

int main()
{
    len = strlen(name);
    run(0);
    return 0;
}