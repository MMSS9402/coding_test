#include <iostream>
#include <array>
using namespace std;


int check_M (char arr[10]){
    int k;
    for(int i=0;i<10;i++){
        if(arr[i] == 'M'){
            k = 0;
            break;
        }
        else{
            k = 1;
        }
    }
    return k;
}

int main(){
    char arr1[10];
    char arr2[10];
    char arr3[10];

    cin >> arr1;
    cin >> arr2;
    cin >> arr3;

    if(check_M(arr1)==0 || check_M(arr2) ==0 || check_M(arr3) ==0){
        cout << "M이 존재합니다";
    }
    else{
        cout << "M이 존재하지 않습니다";
    }

}
