#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> loc(n+1,0);
    for(int i =0; i<n; i++){
        int temp;
        cin>> temp;
        loc[temp] = i;
    }
    int m;
    long long first = 0, last =0;
    cin>> m;
    for(int i=0;i<m;i++){
        int temp;
        cin>> temp;
        first += loc[temp]+1;
        last += n-loc[temp];
    }
    cout<< first << " "<< last;
    return 0;
}