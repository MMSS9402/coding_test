#include <iostream>
using namespace std;

int main(){
    int arr1[4][4] = {
        {0,0,0,1},
        {1,1,0,1},
        {1,0,0,1},
        {1,1,1,1}
    };
    int arr2[4][4] = {
        {1,1,1,1},
        {1,0,1,1},
        {1,0,0,0},
        {1,0,0,0}
    };
    int k =0;

    for(int i =0; i<4;i++){
        for(int j=0;j<4;j++){
            k = arr1[i][j] + arr2[i][j];
            if(k == 0){
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}