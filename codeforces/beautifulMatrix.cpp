#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    for(int i =0;i<5;i++){
        for(int j =0;j<5;j++){
            int temp;
            cin>> temp;
            if(temp == 1){
                y = i;
                x = j;
            }
        }
    }
    cout<< abs(2-x)+ abs(2-y)<< endl;
    return 0;
}