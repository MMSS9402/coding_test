#include <iostream>
#include <cstring>

using namespace std;

char pass[5][10] = {
    {"Jason"},
    {"Dr.tom"},
    {"EXEXI"},
    {"GK12P"},
    {"POW"}};

int main()
{

    char arr[10];
    cin >> arr;
    int flag = 0;

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(arr, pass[i]) == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "암호해제";
    }
    else
    {
        cout << "암호틀림";
    }
}