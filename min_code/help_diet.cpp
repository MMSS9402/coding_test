#include <iostream>

using namespace std;
int arr[4][2] = {{10,20},{30,60},{100,150},{200,300}};

int main(){
    int tar[4] = {0};
    int diet[6];
    for(int i=0;i<6;i++){
        cin >> diet[i];

    }

    for(int i=0;i<6; i++){
        if(10<=diet[i] &&diet[i]<=20){
            tar[0]++;
        }
        if(30<=diet[i] &&diet[i]<=60){
            tar[1]++;
        }
        if(100<=diet[i] &&diet[i]<=150){
            tar[2]++;
        }
        if(200<=diet[i] &&diet[i]<=300){
            tar[3]++;
        }
    }
    for(int i=0; i<4;i++){
        cout << "lev" << i << ":"<< tar[i] << endl;
    }

}