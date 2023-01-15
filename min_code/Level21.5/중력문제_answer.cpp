#include <iostream>
using namespace std;

char vect[4][4];

void drop(int line)
{
    int flag;

    //맨 밑칸에서 맨 위까지 탐색
    for (int y = 3; y >= 0; y--)
    {
        if (vect[y][line] == '_')
        {
            flag = 0;
            for (int t = y - 1; t >= 0; t--)
            {
                if (vect[t][line] != '_')
                {
                    vect[y][line] = vect[t][line];
                    vect[t][line] = '_';
                    flag = 1;
                    break;
                }
            }

            //떨어뜨릴 문자가 없다면 break
            if (flag == 0)
                break;
        }
    }
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> vect[i];
    }

    drop(0); // x==0 Drop
    drop(1); // x==1 Drop
    drop(2); // x==2 Drop

    for (int i = 0; i < 4; i++)
    {
        cout << vect[i] << endl;
    }

    return 0;
}