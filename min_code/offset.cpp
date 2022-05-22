#include <iostream>
using namespace std;

int main(){
    char arr[3][4] = {{'A','T','K','B'}, {'C','Z','F','D'},{'H','G','E','I'}};

    char a;
    int x,y;
    cin >> a >> x >> y;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a == arr[i][j]){
                cout << arr[i+x][j+y];
            }
        }
    }

}