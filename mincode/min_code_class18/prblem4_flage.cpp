#include <iostream>
using namespace std;
int A[6] = {4,2,5,3,7,6};
int B[3] = {5,3,7};

int isSame(int n){
    for(int i=0; i<3; i++){
        if(A[n+i] != B[i]) return 0;

    }
    return 1;
}

int main(){

    int n = 3;
    int flag = 0;
    
    for(int i =0; i<3; i++){
        if (B[i] != A[i+n]){
            flag = 1;
            break;
        }
    }

}
