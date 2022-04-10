#include <iostream>
#include <array>
using namespace std;

int main(){
    char arr[8] = {'A','B','C'};
    
    int N = 1;
    char temp;
    
    arr[N] = '\0';

    for(int i=N;i<8;i++){
        temp = arr[i];  
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(int i=0;i<7;i++){
        cout << arr[i];
        if(arr[i]=='\0'){
            break;
        }
    }
}
