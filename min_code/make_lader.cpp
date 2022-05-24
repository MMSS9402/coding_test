#include <iostream>
using namespace std;

char arr[5][5] = {
    'A','B','C','D','E',
    'F','G','H','I','J',
    'K','L','M','N','O',
    'P','Q','R','S','T',
    'U','V','W','X','Y'
};
int main(){
    char a;
    cin >> a;
    int x = 0;
    int y = 0;

    for(int i=0;i<5;i++){
        for(int j =0;j<5;j++){
            if(arr[i][j] == a){
                x = i;
                y = j;
            }
        }
    }
    cout << x - 2 << "," << y-2 << endl;

}