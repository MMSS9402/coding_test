#include <iostream>
using namespace std;



int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        cin >> arr[i];
    }
    int max = 2000;
    for(int i=1;i<6;i+=2){
        arr[i] = max; 
    }
    int min = 1000;
    int k;
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min = arr[i];
            k = i;
        }
    }

    cout << "arr[" << k << "]" << "=" << min;

}