#include <iostream>
using namespace std;

//1시간 24분 10초
//abc 안에 있는 n ==3이고, abc 안에 있는 변수 i가 1일 때 문제가 생김
//호출 스택을 사용하면 됨
void bts(int i){
    
    cout << i;
}

void abc(int n){
    for(int i=0; i<4; i++){
        if(n ==3 && i == 1){
            int d = 1;
        }
        bts(i);
    }
}

int main(){

    for(int i = 0;i<5; i++){
        abc(i);
    }
}