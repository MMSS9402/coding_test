#include <iostream>

using namespace std;

int train[8] ={3,7,6,4,2,9,1,7};

int main(){
    int team[3];
    
    for(int i=0;i<3;i++){
        cin >> team[i];
    }
    int k = 0;
    for(int i=0;i<8;i++){
        
        if(train[i] == team[0] ){
            k = i;
            break;
        }
        
    }

    cout << k << "번~" << k+2 <<"번" << " 칸";


}