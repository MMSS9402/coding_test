#include <iostream>
using namespace std;

int apt[5][3] = {
    {15, 18, 17},
    {4, 6, 9},
    {10, 1, 3},
    {7, 8, 9}, 
    {15, 2, 6}
};

int isPattern(int apt[5][3], int family[3],int y){
    if(apt[y][0] == family[0]){
        return 1;
    }
    return 0;
}

int main(){
    int family[3];
    
    for(int i=0;i<3;i++){
        cin >> family[i];
    }

    int f = 0;
    
    for(int i=0;i<5;i++){
        if(isPattern(apt,family,i) == 1){
            f = i;
        }
    }

    if(f == 0) cout << 5 << "층";
    if(f == 1) cout << 4<< "층";
    if(f == 2) cout << 3<< "층";
    if(f == 3) cout << 2<< "층";
    if(f == 4) cout << 1<< "층";

}