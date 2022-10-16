#include <iostream>
using namespace std;

void run(int x)
{
    if (x == 1)
    {
        cout << x << " ";
        return;
    }
    cout << x << " ";
    run(x - 1);
    cout << x << " ";
}

int main()
{
    char arr[10];
    int len = 0;
    cin >> arr;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == '\0')
        {
            len = i;
            break;
        }
    }

    run(len);
}