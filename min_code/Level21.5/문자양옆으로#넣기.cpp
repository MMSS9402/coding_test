#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[10];
    char a, b;

    cin >> arr;
    cin >> a >> b;

    int len = strlen(arr);

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == a || arr[i] == b)
        {
            if (i != 0 || i != len - 1)
            {
                arr[i - 1] = '#';
                arr[i + 1] = '#';
            }
            else if (i == 0)
            {
                arr[i + 1];
            }
            else
            {
                arr[i - 1];
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
    }
}