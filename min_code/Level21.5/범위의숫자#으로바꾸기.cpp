#include <iostream>
using namespace std;

int main()
{
    int arr1[4][3] = {
        {1, 5, 3},
        {4, 5, 5},
        {3, 3, 5},
        {4, 6, 2}};
    int a, b;

    cin >> a >> b;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr1[i][j] >= a && arr1[i][j] <= b)
            {
                arr1[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr1[i][j] == 0)
            {
                cout << "#"
                     << " ";
                continue;
            }
            else
            {
                cout << arr1[i][j] << " ";
            }
        }
        cout << endl;
    }
}