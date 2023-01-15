#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {
        {3, 4, 1, 5},
        {3, 4, 1, 3},
        {5, 2, 3, 6}};
    int sum[4]={0};
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[j] += arr[i][j];
        }
    }

    int index;
    cin >> index;

    cout << sum[index];
}