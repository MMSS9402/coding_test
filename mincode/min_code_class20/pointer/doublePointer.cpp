// 더블 포인터
// int **p와 같은 더블 포인터는 int *g와 같은 싱글 포인터를 가리키는 포인터!
// *g는 가리키고 있는 변수 가리키고 있는 곳의 값!
// r은 가리키고 있음 a
#include <iostream>
using namespace std;

int main(){
    int t = 7;
    int a = 9;
    int* kg = &t;
    int** p = &kg;
    int** b = &kg;

    int a = 9;
    int* g = &a;
    int* r = &a;

    cout << *kg << "=";
    cout << **p << "\n";

    cout << g << "=";
    cout << r << "\n";

    cout << *p << "=";
    cout << kg << "\n";
}

