#include <iostream>

using namespace std;

int arr[3][2][2] = {
    {2, 4,
     1, 5},
    {2, 3,
     3, 6},
    {7, 3,
     1, 5}};

int main()
{
    int a;
    cin >> a;

    int max = -1;
    int min = 100;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[a][i][j] > max)
            {
                max = arr[a][i][j];
            }
            if (arr[a][i][j] < min)
            {
                min = arr[a][i][j];
            }
        }
    }
    cout << "MAX=" << max << endl;
    cout << "MIN=" << min << endl;
}