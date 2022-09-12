#include <iostream>
using namespace std;

int arr[7] = {3, 5, 4, 2, 6, 1, 9};

void abc(int x)
{

    if (x == 6)
    {
        cout << "호우";
    }
    cout << arr[x];
    abc(x + 1);
    cout << arr[x];
}

int main()
{
    abc(0);
    return 0;
}