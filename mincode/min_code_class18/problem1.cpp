#include <iostream>
using namespace std;

int main(){

    int arr1[4] = {1,4,2,5};
    int arr2[4] = {1,4,3,5};

    int flag = 0;
    for(int i=0; i<4; i++){
        if(arr1[i] != arr2[i]){
            flag = 1;
            break;
        }
    }
    if(flag) cout << "O";
    else cout << "x";
}