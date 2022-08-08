//포인터 어디에 씀?? => 1. return 여러 개 하고 싶을 때, call by reference하고 싶을 떄.
//                  => 2. 링크드 리스트!!(linked list)

#include <iostream>
using namespace std;

void bbq()
{
    cout << "안녕 비비큐\n";
}

int main()
{

    //변수도 가리키고
    //배열도 가리키고
    //함수도 가리키고
    int vect[5] = {1, 2, 3, 4, 5};

    void (*p)();

    p = &bbq;
    (*p)();
}