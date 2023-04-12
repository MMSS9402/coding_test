#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {
        {3,7,4},
        {2,2,4},
        {2,2,5}
    };
    int target[3];
    for(int i=0; i<3; i++){
        cin >> target[i];
    }
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(target[0] == arr[i][j]){
                count0++;
            }
            if(target[1] == arr[i][j]){
                count1++;
            }
            if(target[2] == arr[i][j]){
                count2++;
            }
        }
    }
    if(count0>count1 && count0>count2){
        cout << target[0] <<endl;
    }
    if(count1>count0 && count1>count2){
        cout << target[1] <<endl;
    }
    if(count2>count0 && count2>count1){
        cout << target[2] <<endl;
    }
    


}