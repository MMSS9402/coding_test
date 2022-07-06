#include <iostream>
using namespace std;

int A[6] = {4,2,5,3,7,6};
int isExist(int n){
    for(int i=0; i<6; i++){
        if (A[i] == n) return 1;
    }
    return 0;
}

int main(){

    int n;
    cin >> n;

    if(isExist(n)) cout << "O";
    else cout << "X";

}