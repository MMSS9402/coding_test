#include <iostream>
using namespace std;
char arr[2][3] = {{'G','K','T'}, {'P','A','C'}};

int isExist(char a, char b){
    int count = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] == a){
                count++;
            }
            if(arr[i][j] == b){
                count++;
            }
        }
    }
    return count;
}

int main(){

    char a,b;

    cin >> a >> b;

    if(isExist(a,b) == 2){
        cout << "대발견";
    }
    if(isExist(a,b) == 1){
        cout << "중발견";
    }
    if(isExist(a,b) == 0){
        cout << "미발견";
    }




}