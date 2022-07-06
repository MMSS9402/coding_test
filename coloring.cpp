#include <iostream>
using namespace std;
int MAP[4][4] = {0};

int main()
{
    for (int k = 0; k < 3; k++)
    {
        char c;
        int a;

        cin >> c >> a;

        if (c == 'G')
        {
            for (int i = 0; i < 4; i++)
            {
                MAP[a][i] = 1;
            }
        }
        if (c == 'S')
        {
            for (int i = 0; i < 4; i++)
            {
                MAP[i][a] = 1;
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << MAP[i][j] << " ";
        }
        cout << endl;
    }
}
