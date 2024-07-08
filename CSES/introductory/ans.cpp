#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES"<<'\n'
#define no cout<< "NO"<<'\n'

int MOD = 1e9+7;

char func(ll k, ll idx){
    ll num = k/idx;
    ll j = k%idx;
    ll prev = 0;
    for(int i=idx-1; i>0;i--){
        prev = prev*10+9;
    }
    num += prev;
    if(j!=0){
        num++;
        j--;    
    }
    else j = idx-1;
    // cout<< num<< " "<< j<< endl;
    // j = (j+1)%idx;
    return to_string(num)[j];

}


void solve(){
    ll q, k;
    cin>>q;
    vector<ll> poss;
    ll fac = 1;
    for(int i=1;i<18;i++){
        poss.push_back(9*i*fac);
        fac*=10;
    }
    // cout<<poss[0]<< " ";
    for(int i=1;i<17;i++){
        poss[i] += poss[i-1];
        // cout<<poss[i]<< " ";
    }
    // cout<<endl;
    while(q--){
        cin>>k;
        ll idx =0;
        if(k> poss[16]){
            k-=poss[16];
            idx = 17;
        }else{
            for(int i = 15; i>=0;i--){
                if(poss[i+1] >= k && poss[i] <k){
                    k-=poss[i];
                    idx = i+1;
                    break;
                }
            }
        }
        // cout<< k<< " "<< idx<<endl;
        if(idx == 0){
            cout<< k<< '\n';
            continue;
        }
        idx++;
        char ans = func(k, idx);
        cout<< ans<< '\n';

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("D:\\CP\\IO\\input.txt","r",stdin);
    freopen("D:\\CP\\IO\\output.txt","w",stdout);
    #endif
    int t=1;
    // cin >> t;
    while(t--) {
        solve();
    }
    #ifndef ONLINE_JUDGE
    cout << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    return 0;
}