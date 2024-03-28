#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    string s = "abc";
    for(int i =0; i<t; i++){
        string str;
        cin>>str;
        int wrongcount = 0;
        for(int j =0; j<3; j++){
            if(str[j] != s[j]){
                wrongcount++;
            }
        }
        if(wrongcount ==3){
            cout<< "NO"<< endl;
        }else{
            cout<< "YES"<< endl;
        }

        
    }
}