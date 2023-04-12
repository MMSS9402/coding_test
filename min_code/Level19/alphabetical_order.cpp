#include <iostream>
#include <array>
using namespace std;


int main(){
    char arr[6][3];
    int c =65;

    for(int j=2;j>=0;j--){
        for(int i=5;i>=0;i--){
            arr[i][j] = c;
            c++;
        }
    }

    int x,y;
    cin >> x >> y;
    cout << arr[x][y]<<endl;
}
