#include <iostream>
#include <cstring>
using namespace std;

int b = 1;

int step(char a[4])
{
    if (strcmp(a, "up") == 0)
    {
        if (b == -1)
        {
            b += 2;
        }
        else
        {
            b += 1;
        }
    }
    if (strcmp(a, "down")==0)
    {
        if (b == 1)
        {
            b -= 2;
        }
        else
        {
            b -= 1;
        }
    }
    return b;
}

int main()
{
    char a[4];
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        step(a);
    }
    if (b >= 1)
    {
        cout << b << endl;
    }
    if (b <= -1)
    {
        cout << "B" << -(b) << endl;
    }
}