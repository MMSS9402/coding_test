#include <iostream>

using namespace std;

void bbq(int arr[6], int x)
{
    if (x == 6)
    {
        cout << arr[x - 1] << " ";
        return;
    }
    cout << arr[x - 1] << " ";
    bbq(arr, x + 1);
    cout << arr[x - 1] << " ";
}

int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    bbq(arr, 1);
}