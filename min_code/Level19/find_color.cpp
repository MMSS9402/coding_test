#include <iostream>
using namespace std;

int map[2][3] = {{3,55,42},{-5,-9,-10}};

char isExist(int map[2][3],int x){
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            if(map[i][j] == x){
                return 'Y';
            }
        }
}
    return 'N';
}

int main(){
    int pix[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> pix[i][j];
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << isExist(map, pix[i][j]) << " ";
        }
        cout << endl;
    }

}