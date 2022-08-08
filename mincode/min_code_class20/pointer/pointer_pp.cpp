#include <iostream>
using namespace std;

int main(){

    //변수도 가리키고
    //배열도 가리키고
    //함수도 가리키고
    int vect[5] = {1,2,3,4,5};
    int (* p)[5]; // 한 포인터 변수

    p = &vect;

    cout << (*p)[1];

}