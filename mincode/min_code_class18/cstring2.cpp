#include <iostream>
using namespace std;

int main(){
    char buf1[] = "ABC";
    char buf2[] = "ABC";
    // compare 같으면 0을 리턴
    // 문자열 비교 라이브러리라서 int 배열에는 적용 불가
    if(!strcmp(buf1,buf2) == 0) cout << "o";
    else cout << "x";
}