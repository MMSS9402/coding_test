#include <iostream>
using namespace std;

int v[4] = {5,2,5,7};

int getCount(int n){
    int cnt;
    for(int i=0;i<4;i++){
        if(v[i] == n) cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;

    cout << getCount(n);
}