#include <iostream>
using namespace std;
int arr[4] = {3,7,4,9};

int isSame(int arr[4],int input[4]){
    for(int i=0;i<4;i++){
        if(arr[i] != input[i]){
            return 0;
        }
    }
    return 1;
}

int main(){

    int input[4];

    for(int i=0; i<4; i++){
        cin >> input[i];
    }

    if(isSame(arr,input))   cout<<"pass";
    else cout <<"fail";
}