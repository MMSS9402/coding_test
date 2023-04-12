#include <iostream>
using namespace std;

int maxIndex(char arr[11]){
    int k = 0;
    int max = arr[0];
    for(int i=1;i<11;i++){
        if(arr[i]>max && arr[i] != '\0'){
            max = arr[i];
            k = i;
        }
        if(arr[i]=='\0'){
            break;
        }
    }
    return k;
}
int minIndex(char arr[11]){
    int k = 0;
    int min = arr[0];
    for(int i=1;i<11;i++){
        if(arr[i]<min && arr[i] != '\0'){
            min = arr[i];
            k = i;
        }
        if(arr[i]=='\0'){
            break;
        }
    }
    return k;

}

int main(){
    char arr[11];
    cin >> arr;
    cout << maxIndex(arr) << endl;
    cout << minIndex(arr) << endl;
}
