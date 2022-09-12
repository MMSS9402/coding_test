#include <iostream>
using namespace std;

int arr[8] = {3, 7, 4, 1, 9, 4, 6, 2};

void abc(int x){
    if(x == 0){
        cout << arr[x] << " ";
        return;
    }
    cout << arr[x] << " ";
    abc(x-1);
    cout << arr[x] << " ";
}

int main()
{
    int n;
    cin >> n;
    abc(n);
}