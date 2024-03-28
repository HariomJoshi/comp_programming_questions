#include<stdio.h>
#include<iostream>
#include<limits.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){    
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        for(int j =0; j<n; j++){
            if(s[j] == 'B'){
                j +=k-1;
                count++;
            }
        }
        cout<< count<< endl;
    }
    return 0;
}