#include <iostream>
using namespace std;

int MAP[3][4] = {
    {65000, 35, 42, 70},
    {70, 35, 65000, 1300},
    {65000, 30000, 38, 42}
};

int dat[70000];

int main(){
    for(int i=0;i<3;i++){
        for(int j=0; j<4;j++){
            dat[MAP[i][j]]++;
        }
    }

    int max = 0;
    int max_index = 0;

    for(int i=0;i<70000;i++){
        if(dat[i] == 0) continue;
        if(dat[i]>max){
            max = dat[i];
            max_index = i;
        }
    }
    cout << max_index;
}