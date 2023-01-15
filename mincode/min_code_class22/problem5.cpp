#include <iostream>
using namespace std;

char path[10];

void run(int lev, int n, char arr[10])
{
    if (lev == n)
    {
        cout << path << endl;
        return;
    }
    for (int i = 0; i < 5; i++)
    {
        path[lev] = arr[i];
        run(lev + 1, n, arr);
        path[lev] = 0;
    }
}

int main()
{
    char arr[10] = {"ABCDE"};
    // cin >> arr;
    int n = 3;
    // cin >> n;
    run(0, n, arr);
}