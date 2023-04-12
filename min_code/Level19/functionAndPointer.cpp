#include <iostream>
using namespace std;

void BBQ(int a, int b, int c, int d, int e, int *x, int *y)
{
    int arr[5] = {a, b, c, d, e};
    int max = -1;
    int min = 1000;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    *x = max;
    *y = min;
}

int main()
{
    int c0, c1, c2, c3, c4;
    int a, b;

    cin >> c0 >> c1 >> c2 >> c3 >> c4;

    BBQ(c0, c1, c2, c3, c4, &a, &b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}