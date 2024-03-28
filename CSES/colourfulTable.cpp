#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int t;
    cin>> t;
    for(int i =0; i<t; i++){
        int n, k;
        cin>> n>> k;
        int a[n];
        for(int j = 0; j<n; j++){
            cin>> a[j];
        }
        // now we have our input ready -- apply logic
        int b[n][n];
        for(int j = 0; j<n; j++){
            for(int k =0; k<n; k++){
                b[j][k] = min(a[j], a[k]);
            }
        }
        // 2D matrix is ready
        

               
    }
}