#include <iostream>
using namespace std;

int main(){
    char arr[3][10] = {'\0',};
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    for(int i=0; i<10; i++){
        if(arr[0][i] == '\0'){
            cout << arr[0][i-1];
            break;
        }
    }
    for(int i=0; i<10; i++){
        if(arr[1][i] == '\0'){
            cout << arr[1][i-1];
            break;
        }
    }
    for(int i=0; i<10; i++){
        if(arr[2][i] == '\0'){
            cout << arr[2][i-1];
            break;
        }
    }
}