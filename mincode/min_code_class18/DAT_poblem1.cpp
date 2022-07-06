#include <iostream>
using namespace std;

int main(){
    char arr[9] ={'B','T','S','K','F','S','B','B','Q'};
    char target[200] = {0};

    for(int i =0; i<9;i++){
        target[arr[i]]++;
    }

    for(int i=0; i<200; i++){
        if(target[i] == 0) continue;
        cout << target[i] << endl;
    }
}