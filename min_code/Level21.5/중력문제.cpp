#include <iostream>
using namespace std;

int main()
{
    char arr[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == '_')
                continue;
            if (arr[i + 1][j] == '_')
            {
                arr[i + 1][j] = arr[i][j];
                arr[i][j] = '_';
            }
            if (arr[i + 1][j] != '_' && arr[i + 2][j] == '_')
            {
                arr[i + 2][j] = arr[i + 1][j];
                arr[i + 1][j] = arr[i][j];
                arr[i][j] = '_';
            }
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
