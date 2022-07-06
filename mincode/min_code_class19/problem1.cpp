// #include <iostream>
// using namespace std;

// int isSame(char da[5],char db[3]){
//     for(int i=0;i<5;i++){
//         if(da[i] == db[0]){
//             return 1;
//         }
//     }
//     return 0;
// }



// int main(){
//     char da[5] = {'A','B','T','R','C'};

//     char db[3] = {'B','T','R'};

//     if(isSame(da,db)) cout << "o";
//     else cout << "x";

// }

#include <iostream>
using namespace std;

char da[10] = "ABTRC";
char db[4] = "BTR";

int isSame(int idx){
    for(int i=0;i<3;i++){
        if(db[i] != db[idx+i]) return 0;
    }
    return 1;
}

int main() {

    int ret = isSame(1);
    if(ret) cout << "o";
    else cout << "x";

}