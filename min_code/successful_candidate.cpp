#include <iostream>
using namespace std;
int A[6] = {3,7,4,1,2,6};

int isExist(int x){
    for(int i=0;i<6;i++){
        if(A[i] == x){
            return 1;
            
         }
     }
     return 0;
}

int main(){
    

    int univer[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> univer[i][j];
        }
     }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(isExist(univer[i][j])) cout << "OK" << " ";
            else cout << "NO" << " ";
        }
        cout <<endl;
    }
}