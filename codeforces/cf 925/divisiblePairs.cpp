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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> a(n,0);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        ll count =0;
        map<pair<ll,ll>, ll> map;
        for(auto &it: a){
            ll modx = (x-it%x)%x;
            ll mody = it%y;
            count+= map[{modx, mody}];
            map[{it%x, it%y}]++;
        }
        cout<< count<< '\n';
    }
    return 0;
}