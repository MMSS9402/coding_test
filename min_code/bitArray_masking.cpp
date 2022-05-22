#include <iostream>

using namespace std;


int main(){

    int bit[7];
    for(int i=0; i<7; i++){
        cin >> bit[i];
    }
    int vect[7] = {3,5,4,2,6,6,5};
    int arr[7] = {};
    
    for(int i=0;i<7;i++){
        if(bit[i] == 0){
            arr[i] = 0;
        }
        else{
            arr[i] = 7;
        }
    }
    for(int i =0; i<7; i++){
        cout << arr[i];
    }
}