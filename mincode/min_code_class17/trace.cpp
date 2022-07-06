//한줄삭제  shift + Del
//한줄복제 ctrl +D
 // 조사식 포커스 : 
    //Ctrl + Alt + W
    // 눌렀다가 손 때고
    // 숫자 1 누르기
//조사식 에디터로 돌아가기 : ESC
    //포커스가
    //에디터로 돌아가기
    //ESC
//조사식에 포커스를 맞추고 ctrl + A 하면 전체 선택 후 delete
//break point : F9
    //디버깅의 시작 지점을 breaking point로 걸어놓자.


#include <iostream>

using namespace std;

void abc(int arr[50]) {

    for(int i=0;i<50;i++){

        //if 42번 인덱스부터 뭔가 값이 이상함... 어떻게 볼래??
        //이때 디버깅 코드를 삽입함
        //아래처럼 하고 int d에 breaking point를 걸고 디버깅하면 바로 42번째를 볼 수 있음.
        
        if(i==42){
            int d = 1;
        }
        arr[i] = (arr[i-1]*7+41)%11;
    }
}

int main(){

    int arr[50] = {5};
    abc(arr);

    return 0;
}