#include<stdio.h>
#include<iostream>
#include<limits.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>> n;
        int arr[n];
        int min =INT_MAX;
        int minIndex =-1;
        for(int j=0; j<n;j++){
            cin>>arr[j];
            if(arr[j]< min){
                min = arr[j];
                minIndex = j;
            } 
        }      
        // we have our input ready
        arr[minIndex]++;
        int product =1;
        for(int j=0; j<n; j++){
            product *= arr[j];
        }
        cout<< product<< endl;
    }
}