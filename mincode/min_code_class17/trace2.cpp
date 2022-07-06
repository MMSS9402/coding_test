#include<iostream>
using namespace std;

//int arr[100000] ={5};
//int map [1000][1000];
int main(){

    //전역변수 공간에 비하면 지역 변수는 엄청나게 작은 공간, int형 변수 10만개
    //넘어가면 공간 크기가 간당간당함.
    //언제 음수가 되는 지 trace 해보세요
    //인덱스 27번 부터 천천히 볼 수 있게 디버깅 코드를 넣어보세요.

    //2차원 배열
    /*
    for(int i=0; i<100000;i++){
        arr[i+1] = arr[i] * 2;
    }
*/

    int map[10][10] = {0};

    int t = 1;
    for(int y =0; y<10; y++){
        for(int x =0; x<10; x++){
            t = (t * 3 + 1234) % 22;
            map[y][x] = t;
        }
    }

    //[3][4] 값 확인하기
    return 0;
}