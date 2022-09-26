#include <iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    int c = int(a);

    for (int i = -3; i <= 3; i++)
    {
        int ascii = c + i;
        if (ascii > 90)
        {
            ascii = ascii - 25;
        }
        if (ascii < 65)
        {
            ascii = ascii + 25;
        }
        cout << char(ascii);
    }
}