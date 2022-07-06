#include <iostream>
using namespace std;

int arr[2][4] = {
    4,5,4,5,
    5,5,4,5
};
int tar[2][2] = {
        4,5,
        4,5
    };


int isCount(int x, int y){
    for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
            if(tar[i][j]!=arr[x+i][y+j]){
                return 0;
            }
        }            
    }
    return 1;
}

int main(){
    int count = 0;
    for(int i=0;i<3;i++){
        if(isCount(i,0)) count++;
        else break;
    }
    cout << count;
        
}