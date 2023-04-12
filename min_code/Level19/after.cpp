#include <iostream>
using namespace std;

int main(){
    int arr1[2][5] = {
        {0,0,1,0,0},
        {0,0,1,1,1}
        };
    
    int arr2[2][5] = {
        {3,5,4,1,1},
        {3,5,2,5,6}
        };

    int arr[4];
    int k =0;
    int x;
    cin >> x;

    for(int i=0; i<2;i++){
        for(int j=0; j<5; j++){
            if( arr1[i][j] == 1){
                arr[k] = arr2[i][j];
                k++;
            }
        }
    }
    int j = 0;
    for(int i=0;i<4;i++){
        if(arr[i] == x){
            j = 1;
        }
    }
    if( j == 1){
        cout << x << " " << "존재";
    }
    else{
        cout << x << " " << "없음";
    }
    
}