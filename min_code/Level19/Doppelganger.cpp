#include <iostream>
using namespace std;

int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }
    int Dat[100] = {0};

    for(int i=0;i<6;i++){
        Dat[arr[i]]++;
    }
    int flag = 0;
    for(int i=0;i<100;i++){
        if(Dat[i] == 0) continue;
        if(Dat[i]>=2){
            flag = 1;
            break;
        }
    }
    if(flag) cout<< "도플갱어 발견";
    else cout << "미발견";
}
