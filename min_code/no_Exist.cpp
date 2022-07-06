#include <iostream>

using namespace std;

int main(){
    int arr1[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> arr1[i][j];
        }
    }
    int Dat[10] = {0};

    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            Dat[arr1[i][j]]++;
        }
    }
    for(int i=1;i<10;i++){
        if(Dat[i] == 0){
            cout << i<< " ";
        }
    }
}