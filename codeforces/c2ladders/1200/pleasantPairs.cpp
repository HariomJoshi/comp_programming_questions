#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n+1,0);
        for(int i=1;i<=n;i++) cin>>a[i];
        // one based indexing used here
        ll count = 0;
        for(int i=1;i<=n;i++){
            for(int j = a[i]-i; j<=n; j+=a[i]){
                if(j<0) continue;
                if(a[i]*a[j] == (long long)i+j && i<j){
                    count++;
                }
            }
        }
        cout<< count<<'\n';
    }
    return 0;
}