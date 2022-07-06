#include <iostream>
using namespace std;

int arr[3][5] = {
    4,5,1,9,1,
    2,2,3,1,9,
    1,3,1,9,1
};
int tar[3] = {1,9,1};

// int isCount(int x, int y){
//     for(int i=0; i<3;i++){
//         if(tar[i] != arr[x][y+i]){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int count =0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(isCount(i,j)) count++;
//         }
//     }
//     cout << count;
// }

