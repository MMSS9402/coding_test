#include <iostream>

using namespace std;

void count_down(int x)
{
    cout << x << " ";
    if (x == 0)
    {
        return;
    }

    count_down(x - 1);
    cout << x << " ";
}

int main()
{
    int n;
    cin >> n;

    count_down(n);
}