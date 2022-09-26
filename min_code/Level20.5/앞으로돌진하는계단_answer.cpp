#include <iostream>
using namespace std;

int main()
{
    char vect[11];
    int len;
    int x, y;

    cin >> vect;

    for (int i = 0; i < 11; i++)
    {
        if (vect[i] == '\0')
        {
            len = i;
            break;
        }
    }

    for (y = 0; y < len; y++)
    {
        for (x = len - (y + 1); x < len; x++)
        {
            cout << vect[x];
        }
        cout << endl;
    }

    return 0;
}