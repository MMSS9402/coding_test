#include <iostream>
#include <vector>
using namespace std;

int main(){
    char arr[5];
    vector<char> v;
    int N;
    
    
    cin >> arr;
    for(int i=0; i<5; i++){
        v.push_back(arr[i]);
    }
    cin >> N;

    for(int i=6; i>=N; i--){
        v[i] = v[i-1];
    }

    v[N] = 'A';

    for(int i=0; i<6; i++){
        cout << v[i];
    }


}