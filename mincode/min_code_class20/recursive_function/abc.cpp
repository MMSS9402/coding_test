#include <iostream>
using namespace std;
int x;
void abc()
{
    if(x==2){
        return;
    }
    x++;
    abc();
}

int main()
{
    abc();
}

// 1번째 미션은 무한재귀호출을 막는 것부터 시작함!
//코드를 추가했을 때 어떤 현상이 발생하는지 관찰
// 1번째 방법은 전역변수를 하나 만들고