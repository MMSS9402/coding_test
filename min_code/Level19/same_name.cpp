#include <iostream>
using namespace std;

int isSame(char name1[10], char name2[10]){

    for(int i=0; i<10; i++){
        if(name1[i] != name2[i]){
            return 0;
        }
        if(name1[i] == '\0'){
            break;
        }
    }
    return 1;

}

int main(){
    char name1[10];
    char name2[10];

    cin >> name1;
    cin >> name2;

    if(isSame(name1,name2)) cout  << "동명";
    else cout << "남남";


}