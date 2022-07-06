#include <iostream>
using namespace std;

int arr[10] = {4,1,2,3,4,1,2,3,3};
int tar[3] = {1,2,3};

int isCount(int idx){
    for(int i=0;i<3;i++){
        if(tar[i] != arr[idx+i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int count =0;
    for(int i=0; i<=9-3;i++){
        if(isCount(i)) count ++;
    }

    cout << count ;
    
} 