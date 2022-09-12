#include <iostream>
using namespace std;

void abc(int x, int y){
    if (x == y){
        cout << x << " ";
        return;
    }
    cout << x << " ";
    abc(x+1,y);
    cout << x << " ";
}

int main(){
    int a,b;

    cin >> a >> b;

    abc(a,b);
}