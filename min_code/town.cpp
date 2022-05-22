#include <iostream>
using namespace std;

int main(){
    char arr[6] = {'B','T','K','I','G','Z'};

    char ch[4];
    cin >> ch;
    int count = 0;

    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            if(ch[i]==arr[j]){
                count+=1;
            }
        }
    }
    cout << count;
}