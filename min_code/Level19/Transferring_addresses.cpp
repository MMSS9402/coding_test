#include <iostream>
#include<vector>
using namespace std;

int main(){
    int arr[2][3];
    
    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    int max_i;
    int max_j;
    int min = arr[0][0];
    int min_i;
    int min_j;

    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
                max_i = i;
                max_j = i;
            }
            if(arr[i][j]<min){
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }

        }
    }
    cout << "(" << max_i << ',' << max_j << ")" << endl;
    cout << "(" << min_i << ',' << min_j << ")" << endl;
}