#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n ==2){
        cout<< "NO"<< endl;
        return 0;
    }
    if(n%2 == 0){
        cout<< "YES"<< endl;

    }else{
        cout<< "NO"<< endl;
    }
}