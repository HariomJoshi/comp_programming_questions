#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n,m;
        cin>>n>>m;
        long long arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        long long prod =arr[0];
        for(int i=1;i<n-1;i++){
            prod *= arr[i];
            prod  %= m;
        }
        return prod;
        
    }
    return 0;
}