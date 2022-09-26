#include <iostream>
using namespace std;

int main()
{
    int arr1[4][4];
    int arr2[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int flag = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr1[i][j] == 1 && arr2[i][j] == 1)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "걸리지않는다";
    }
    else
    {
        cout << "걸리다";
    }
}