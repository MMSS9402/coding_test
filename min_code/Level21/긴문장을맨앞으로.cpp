#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[3][10];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i][10];
    }
    int len1 = strlen(arr[0]);
    int len2 = strlen(arr[1]);
    int len3 = strlen(arr[2]);

    if (len2 > len1 && len2 > len3)
    {
    }
}