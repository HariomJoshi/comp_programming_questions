#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // input ready
    int a =0,b=0,c=0,d=0, tc =0;
    for(int i =0;i<n;i++){
        if(arr[i] == 1){
            a++;
        }else if(arr[i] == 2){
            b++;
        }else if(arr[i] == 3){
            c++;
        }else{
            d++;
        }
    }
    tc += d + b/2;
    tc+= min(a, c);
    if(c>=a){
        tc+= (c-a);
        if(b&1) tc++;
    }else{
        tc+= (a-c)/4;
        int rem = (a-c)%4;
        if(b&1){
            if(rem+2>4){
                tc+=2;
            }else{
                tc++;
            }
        }else{
            if(rem !=0){
                tc++;
            }
            
        }
        
    }
    
    cout<<tc<<endl;

}
