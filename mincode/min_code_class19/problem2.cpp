// #include <iostream>
// using namespace std;

// char da[10] = "ABFRCBTRV";
// char db[4] = "BTR";

// int isSame(int idx){
//     for(int i=0;i<3;i++){
//         if(db[i] != da[idx+i]){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int flag = 0;
//     for(int i=0;i<7;i++){

//         if(isSame(i)) flag = 1;
//     }

//     if(flag) cout << "o";
//     else cout << "x";
// }

#include <iostream>
#include <cstring>
using namespace std;

char da[10] = "ABFRCBTRV";
char db[4] = "BTR";

int isSame(int idx){
    for(int i=0;i<3;i++){
        if(db[i]!= da[idx+i]) return 0;
    }
    return 1;
}

int main(){
    int len =strlen(da);

    for(int i=0;i<=len-3; i++){
        if(isSame(i) == 1){
            cout << "o";
            return 0;
        }

    }
    cout << "x";
    return 0;
}