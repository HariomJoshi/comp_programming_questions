#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        int a[n-1];
        for(int j =0;j<n-1; j++) cin>> a[j];
        //input ready
        int sum = 0;
        for(int j =0;j<n-1; j++) sum+= a[j];
        cout<< -sum<< endl;
    }
    return 0;
}