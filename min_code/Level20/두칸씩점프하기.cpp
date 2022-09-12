#include <iostream>
using namespace std;

void abc(int a, int b)
{
    if (b == a + 6)
    {
        cout << b << " ";
        return;
    }
    abc(a, b + 2);
    cout << b << " ";
}

int main()
{
    int n;
    cin >> n;
    abc(n, n);
}