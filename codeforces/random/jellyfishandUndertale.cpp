#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        long long a, b;
        int n;
        cin>> a>> b>>n;
        int x[n];
        long long time =b-1;
        b =1;
        for(int j=0; j<n; j++){
            cin>>x[j];
            if(x[j]< a-b){
                time+= x[j];
            }else{
                time+= a-b;
            }
            // time+=min(x[j], a-b);
        }
        cout<< time+1<< endl;
    }

    return 0;
}