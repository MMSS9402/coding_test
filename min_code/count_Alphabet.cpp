#include <iostream>
using namespace std;

int main(){
    char arr[10];
    cin >> arr;

    int Dat[200] = {0};

    for(int i=0;i<10;i++){
        Dat[arr[i]]++;
    }
    int max = 0;
    int max_index = 0;
    for(int i=0;i<200;i++){
        if(Dat[i]==0) continue;
        if(Dat[i]>max){
            max = Dat[i];
            max_index = i;
        }
    }
    cout << char(max_index);
}