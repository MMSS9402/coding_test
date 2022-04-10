#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main(){
    int A[4];
    int B[4];
    int result[4];

    for(int i=0;i<4;i++){
        cin >> A[i];
    }
    for(int i=3;i>=0;i--){
        cin >> B[i];
    }
    for(int i=0;i<4;i++){
        result[i] = A[i] +B[i];
        cout << result[i] << " ";
    }
}