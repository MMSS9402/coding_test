/*문자열 입력 받고 앞으로 출력, 역순 출력 */

#include <iostream>
using namespace std;

int main(){
    char buf[10];
    cin >> buf;
    
    int len = strlen(buf);
    
    for(int i =0; i<len; i++){
        cout << buf[i] << " ";
    }
    cout << endl;
    for(int i = len-1; i>=0;i--){
        cout << buf[i] << " ";
    }
}