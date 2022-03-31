#include <iostream>
using namespace std;


int main(){
    char arr[5];
    int N;
    cin >> arr;
    cin >> N;

    arr[N] = 'A';

    for(int i=0; i<5; i++){
        cout << arr[i];
    }
}