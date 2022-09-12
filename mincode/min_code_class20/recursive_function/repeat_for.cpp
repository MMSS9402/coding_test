//우리가 for문으로 할 수 없는 것을 재귀호출로 구현합니다!
//만능에 가까운 방법
//모든 답을 다 구할 수 있습니다. 싹 다 시도해볼 수 있는 방법!
//싹 다 시도하니까 느립니다.....!
#include <iostream>
using namespace std;

int n = 3;
char path[10];

void run(int x){

    if(x == n){
        cout << path << endl;
        return;
    }
    for(int i=1;i<=3;i++){
        path[x] = '0' + i;
        run(x+1);
    }
    
}


int main() {
    cin >>n;
    run(0);

    return 0;
}