#include <iostream>
using namespace std;

int main()
{
    char arr[10];

    cin >> arr;
    int len;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == '\0')
        {
            len = i + 1;
            break;
        }
    }
    int flag = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (arr[i] != arr[len / 2 + i])
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "동일한문장" << endl;
    }
    else
    {
        cout << "다른문장" << endl;
    }
}