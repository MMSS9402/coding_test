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

//재귀를 막는 2번째 방법 ->재귀호출을 하는데 전역변수를 쓰지 않음! => argument를 사용함!
