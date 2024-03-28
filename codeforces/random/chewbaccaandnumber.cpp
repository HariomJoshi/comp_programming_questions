#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    long long x;
    cin>>x;
    long long number =0;
    long long num =1;
    while(x>=10){
        int temp = (x%10< 9-x%10)? x%10:9-x%10;
        number = number + temp*num;
        num *=10;
        x = x/10;
    }
    if(x==9){
        number = number + 9*num;
    }else{
        int temp = (x%10< 9-x%10)? x%10:9-x%10;
        number = number + temp*num;
    }
    cout<< number<< endl;
    return 0;

}