#include <iostream>
using namespace std;

void isExist(int arr[3][3],int x){
    int k = 0 ;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == x){
                k = 1;
                break;
            }
        }
    }
    if (k ==1){
        cout << x << ":" << "존재" << endl;
    }
    else{
        cout << x << ":" << "미발견" << endl;
    }
}



int main(){
    int arr[3][3] = {
        {3,5,9},
        {4,2,1},
        {5,1,5}
        };
    
    int x,y,z;

    cin >> x >> y >> z;

    isExist(arr,x);
    isExist(arr,y);
    isExist(arr,z);
}