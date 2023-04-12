#include <iostream>
using namespace std;

int main(){
    char arr[10];
    cin >> arr;
    char a,b;
    int k;
    cin >> a >> b;

    for(int i =0; i<10; i++){
        if(arr[i] == a){
            arr[i] = b;
        }
        if(arr[i] == '\0'){
            k = i;
            break;
        }
    }
    for(int i =0; i <k; i++ ){
        cout << arr[i];
    }
}
