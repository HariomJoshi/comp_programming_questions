#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        string n, ans = "";
        cin>>n;
        int size = n.size();
        if(size<=10){
            cout<< n<< endl; 
            continue;
        }
        ans +=n[0];
        ans += to_string(size -2); 
          
        ans+= n[size -1];
        cout<< ans<<endl;
    }
}