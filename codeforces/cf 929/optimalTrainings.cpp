#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define f(i,n) for(int i=0;i<n;i++)
#define fc(i,k,n) for(int i=k;i<=n;i++)
#define fr(i,k,n) for(int i=k;i>=n;i--)
#define debug(x) cout << #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
 
const int MOD = 1e9+7;
const int MAX = 2e5+5;
 
template<typename T>
void inputVector(vector<T>& v, int n) {
    for(int i=0; i<n; i++) {
        T temp;
        cin >> temp;
        v.push_back(temp);
    }
}
 
template<typename T>
void printVector(vector<T>& v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}
 
template<typename T>
void debugVector(vector<T>& v) {
    cout << "[ ";
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "]\n";
}

ll perf(ll a, ll u){
    return a*u - (a*(a-1))/2;
}
 
void solve() {
    //solve here
    ll n;
    cin>>n;
    vector<ll> a;
    a.push_back(0);
    inputVector<ll> (a, n);
    for(int i=1;i<=n;i++) a[i] += a[i-1];
    ll q;
    cin>>q;
    for(ll i=0;i<q;i++){
        ll l, u;
        cin>>l>>u;
        ll idx = l;
        int s= l, e= n;
        while(s<=e){
            int m = s+ (e-s)/2;
            ll temp=a[m]-a[l-1]; 
            if(temp == u){
                idx = m;
                e = m-1;
            }if(temp<u){
                idx = m;
                s = m+1;
            }else{
                e = m-1;
            }
        }
        
        if(a[idx]-a[l-1] != u){
            if(idx == n) idx = idx;
            else{
                if(perf(a[idx+1]-a[l-1], u) > perf(a[idx]-a[l-1], u)) idx++;
            }
        }
        cout<< idx<< " ";
    }
    cout<< '\n';

}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("D:\\CP\\codeforces\\1IO\\input.txt","r",stdin);
    freopen("D:\\CP\\codeforces\\1IO\\output.txt","w",stdout);
    #endif
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}