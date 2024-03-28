#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        int i=0, sc=1, ec=1;
        while(i+1<n && a[i]==a[i+1]){
            sc++;
            i++;
        }
        if(sc==n){
            cout<< 0<< '\n';
            continue;
        }
        i=n-1;
        while(i-1>=0 && a[i-1] == a[i]){
            ec++;
            i--;
        }
        if(a[0]== a[n-1]){
            cout<< n-sc-ec<<'\n';
        }else{
            cout<< n-max(sc, ec)<< '\n';
        }
    }   
    return 0;
}