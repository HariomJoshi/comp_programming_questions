#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n], v[n], t[n]; 
    for(int i = 0;i<n; i++){
        cin>> p[i]>>v[i]>>t[i];
    }
    int cnt =0;
    for(int i =0; i<n ;i++){
        if(p[i]&& v[i] || v[i]&&t[i]|| t[i]&&p[i]) cnt++;
    }
    cout<< cnt<< endl;
    return 0;
}