#include <iostream>
using namespace std;

int main(){
    char arr[6] = {'G','K','G'};

    for(int i=3;i<6;i++){
        cin >> arr[i];
    }

    int Dat[200]={0};

    for(int i=0;i<6;i++){
        Dat[arr[i]]++;
    }
    int flag = 0;
    for(int i=0;i<200;i++){
        if(Dat[i]==0) continue;
        if(Dat[i] >=3){
            flag = 1;
            break;
        }
    }
    if(flag) cout << "있음";
    else cout << "없음";


}