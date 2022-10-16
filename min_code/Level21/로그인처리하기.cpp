#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ID[10];
    char PASSWORD[10];

    cin >> ID;
    cin >> PASSWORD;

    if (strcmp(ID, "qlqlaqkq") == 0 && strcmp(PASSWORD, "tkaruqtkf") == 0)
    {
        cout << "LOGIN";
    }
    else
    {
        cout << "INVALID";
    }
}