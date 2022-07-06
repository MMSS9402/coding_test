#include <iostream>
using namespace std;

int isSame(char arr1[],char arr2[]){
    int len = 0;
    for(int i=0;i<10;i++){
        if(arr1[i] == '\0'){
            len = i;
            break;
        }
    }
    for(int i=0; i<len;i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){

    char arr1[10];
    char arr2[10];
    cin >> arr1 >> arr2;

    if(isSame(arr1,arr2)) cout << "O";
    else cout << "X";
}