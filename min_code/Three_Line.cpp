#include <iostream>
using namespace std;

int main(){
    int arr[7][4];
    int k =1;

    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = k;
            k++;
        }
    }

    int a,b,c;

    cin >> a >> b >> c;
    for(int j=0;j<4;j++){
        arr[a][j] = 0;
        arr[b][j] = 0;
        arr[c][j] = 0;
    }

    for(int i=0;i<7;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] << " ";
        }
        cout << "" << endl;
    }
}