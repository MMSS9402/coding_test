#include <iostream>
using namespace std;

int main()
{

    char arr[10];
    cin >> arr;

    int len = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == '\0')
        {
            len = i - 1;
            break;
        }
    }
    for (int i = len; i >= 0; i--)
    {
        for (int j = i; j <= len; j++)
        {
            cout << arr[j];
        }
        cout << endl;
    }
}