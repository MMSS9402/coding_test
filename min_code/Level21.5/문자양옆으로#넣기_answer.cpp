#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char vect[100];
    int len;

    int mask[100] = {0};
    char ch1, ch2;

    cin >> vect;
    cin >> ch1 >> ch2;

    len = strlen(vect);

    for (int i = 0; i < len - 1; i++)
    {
        if (vect[i + 1] == ch1 || vect[i + 1] == ch2)
        {
            mask[i] = 1;
        }
    }

    for (int i = 1; i < len; i++)
    {
        if (vect[i - 1] == ch1 || vect[i - 1] == ch2)
        {
            mask[i] = 1;
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (mask[i] == 0)
            cout << vect[i];
        else
            cout << "#";
    }

    return 0;
}