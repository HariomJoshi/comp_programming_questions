#include <bits/stdc++.h>
// policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
 
#define ll long long
#define debug(x) cout << #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
#define print_precise(ans, n) cout<<fixed<< setprecision(n)<< ans <<'\n'
#define yes cout<< "YES"<< '\n'
#define no cout<< "NO"<< '\n'
const int MOD = 1e9+7;
const int MAX = 2e5+5;
const double epsilon = 1e-9;
inline int add(int x, int y) { int ret = x + y; if (ret >= MOD) ret -= MOD; return ret; }
inline int sub(int x, int y) { int ret = (x - y); if (ret < 0) ret += MOD; return ret; }
inline int mul(int x, int y) { int ret = (1ll * x * y) % MOD; return ret; }
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

/*
 
THINK
gcd 
xor
binary search
simple math
dp
binary search on ans
dont give up, you can pull it back :)
 
*/

// -------------------------SOLUTION---------------------------


void solve() {
    //solve here
    ll n, k;
    cin>>n>>k;
    vector<ll> a;
    inputVector<ll> (a, n);
    if(k>=3){
        cout<< 0<<'\n';
    }else if(k==2){
        ll n = a.size();
        sort(a.begin(), a.end());
        ll mi = a[0];
        for(int i=1;i<n;i++){
            mi = min(mi, a[i]-a[i-1]);
        }

        for(ll i=0;i<n;i++){
            for(ll j=0;j<n; j++){
                ll k = a[i]-a[j];
                ll p = lower_bound(a.begin(), a.end(), k)-a.begin();
                if(p<n) mi = min(mi, abs(a[p]-k));
                if(p>0) mi = min(mi, abs(k-a[p-1]));
            }
        }
        cout<< mi<<'\n';

    }else if(k==1){
        sort(a.begin(), a.end());
        ll sub = LONG_LONG_MAX;
        for(int i=1;i<n;i++){
            sub = min(sub, a[i]-a[i-1]);
        }
        cout<< sub<< '\n';
    }else{
        cout<< *min_element(a.begin(), a.end())<< endl;
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
    cin >> t;
    while(t--) {
        solve();
    }
    #ifndef ONLINE_JUDGE
    cout << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    return 0;
}

