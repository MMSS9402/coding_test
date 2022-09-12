#include <iostream>
using namespace std;

void abc(char arr[5], int x)
{

    if (x == 5)
    {
        cout << endl;
        return;
    }
    cout << arr[x];
    abc(arr, x + 1);
    cout << arr[x];
}

int main()
{
    char arr[5];
    cin >> arr;

    abc(arr, 0);
}