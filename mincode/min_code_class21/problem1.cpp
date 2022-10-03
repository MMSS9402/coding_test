#include <iostream>
using namespace std;

void run(int x)
{
    if (x == 4)
    {
        return;
    }

    run(x + 1);
    cout << "#" << endl;
}

int main()
{
    run(0);

    return 0;
}
//이게 저번 시간에 배운건데, 만약에....
//재귀호출이 2개이면 어떻게 될까???
