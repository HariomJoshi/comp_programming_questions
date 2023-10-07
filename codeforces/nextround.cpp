#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n, k;   
    cin>> n>>k;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    k--;  // this is very important in case of ranking questions
    while(k+1<n && a[k+1] == a[k]){
        k++;
    }   
    while(k>=0 && a[k]<=0){
        k--;
    }
    cout<< k+1<<endl;
    
}