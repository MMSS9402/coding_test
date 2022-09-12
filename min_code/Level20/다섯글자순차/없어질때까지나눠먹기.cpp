#include <iostream>
using namespace std;

int n;

void abc(int x){
    if(x == 0 ){
        return;
    }
    int limit = x/2;
    abc(limit);
    cout << x << " ";

}

int main(){
    cin >> n;
    abc(n);
}