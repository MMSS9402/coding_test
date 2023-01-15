#include <iostream>

using namespace std;

int main()
{
    int vect[8] = {1, 9, 3, 1, 0, 1, 0, 7};

    int dat[10] = {0};

    for (int i = 0; i < 8; i++)
    {
        dat[vect[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (dat[i] == 0)
            continue;

        for (int j = 0; j < dat[i]; j++)
        {
            cout << i << " ";
        }
    }
}