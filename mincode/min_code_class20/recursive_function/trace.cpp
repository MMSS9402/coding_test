#include <iostream>
using namespace std;
int x = 0;

void abc()
{
    if (x == 2)
    {
        return;
    }
    x++;
    abc();

    int d = 1; // dummy code, 쓸모없는 코드 트레이스 할 때, 단계 생략하지 말라고
}

int main()
{
    abc();
}