#include <iostream>
using namespace std;

int main()
{
    char ch;
    char input;
    cin >> input;

    for (int i = input - 3; i <= input + 3; i++)
    {
        ch = i;

        if (ch < 'A')
            ch += 26;
        if (ch > 'Z')
            ch -= 26;

        cout << (char)ch;
    }

    return 0;
}