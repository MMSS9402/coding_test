#include <iostream>
#include <string>
using namespace std;

string pass[4];

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> pass[i];
    }

    int max_len = 0;
    int min_len = 1000;
    int max_index = 0;
    int min_index = 0;

    for (int i = 0; i < 4; i++)
    {
        if (pass[i].length() > max_len)
        {
            max_len = pass[i].length();
            max_index = i;
        }
        if (pass[i].length() < min_len)
        {
            min_len = pass[i].length();
            min_index = i;
        }
    }
    cout << "긴문장:" << max_index << endl;
    cout << "짧은문장:" << min_index << endl;
}