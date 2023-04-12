#include <iostream>

using namespace std;

int main(){
    char arr[6];

    cin >> arr;

    int x;

    cin >> x;

    char temp;
    for(int i = 5; i>=x; i--){
        if(arr[i] != '\0'){
            arr[i+1] = arr[i];
        }
        
    }
    arr[x] = 'A';

    for(int i=0; i<6;i++){
        if(arr[i] != '\0'){
            cout << arr[i];
        }
        else{
            break;
        }
    }
    
}