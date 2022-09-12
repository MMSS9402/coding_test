#include <iostream>
using namespace std;

int arr[8] = {3, 5, 4, 2, 6, 1, 9, 0};

void abc(int x, int sum)
{

    if (x == 7)
    {
        cout << "호우";
    }
    cout << arr[x];
    abc(x + 1, sum + arr[x + 1]);
    cout << sum << " ";
}

int main()
{
    abc(0, arr[0]);
    return 0;
}