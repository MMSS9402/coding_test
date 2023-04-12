#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int black[2][4] ={
        5,7,9,55,
        30,10,6,8
    };
    int town[2][4] = {
        1,2,3,4,
        5,7,10,15
    };
    int dat[100] ={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<4; j++){
            dat[black[i][j]]++;
        }
    }
    int person = 0;
    int crime = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4; j++){
            if(dat[town[i][j]] == 0){
                person++;
            }
            else{
                crime++;
            }
        }
    }
    cout << "person" << ":" << person <<endl;
    cout << "crim" <<":" << crime;
}