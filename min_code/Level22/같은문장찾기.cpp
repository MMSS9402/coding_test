#include <iostream>
#include <cstring>

using namespace std;
char a[10];
char b[10];
char c[10];

int isSame(char a[10], char b[10], char c[10])
{
    if (strcmp(a, b) == 0 && strcmp(b, c) == 0)
    {
        return 0;
    }
    if (strcmp(a, b) == 0 && strcmp(b, c) != 0)
    {
        return 1;
    }
    if (strcmp(a, b) != 0 && strcmp(b, c) == 0)
    {
        return 1;
    }
    if (strcmp(a, b) != 0 && strcmp(b, c) != 0)
    {
        return 2;
    }
}

int main()
{

    cin >> a >> b >> c;

    if (isSame(a, b, c) == 0)
    {
        cout << "WOW" << endl;
    }
    if (isSame(a, b, c) == 1)
    {
        cout << "GOOD" << endl;
    }
    if (isSame(a, b, c) == 2)
    {
        cout << "BAD" << endl;
    }
}