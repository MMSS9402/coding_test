#include <iostream>
using namespace std;

char arr[4][3];

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int A_X = 0;
    int B_X = 0;
    int A_Y = 0;
    int B_Y = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 'A')
            {
                A_X = i;
                A_Y = j;
            }
            if (arr[i][j] == 'B')
            {
                B_X = i;
                B_Y = j;
            }
        }
    }
    int result = 0;

    if(A_X>=B_X){
        result += A_X-B_X;
    }
    else{
        result += B_X - A_X;
    }
    if(A_Y >= B_Y){
        result += A_Y - B_Y;
    }
    else{
        result += B_Y - A_Y;
    }

    cout << result;
}