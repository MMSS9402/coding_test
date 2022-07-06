//다중 카운트
#include <iostream>
using namespace std;
int map[2][4] = {
    5,5,2,6,
    9,1,1,3,
};
int tar[8] ={5,6,1,1,1,1,5,4};
int getCount(int n){
    int cnt;
    for(int i=0;i<4;i++){
        if(tar[i] == n) cnt++;
    }
    return cnt;
}

int main(){
    for(int i =0; i<2;i++){
        for(int j=0;j<4;j++){
            int ret = getCount(map[i][j]);
            cout << ret;
        }
        cout << endl;
    }
    return 0;
}