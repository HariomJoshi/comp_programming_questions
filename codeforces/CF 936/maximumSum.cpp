#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define debug(x) cout << #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
#define print_precise(ans, n) cout<<fixed<< setprecision(n)<< ans <<'\n'
 
const int MOD = 1e9+7;
const int MAX = 2e5+5;
const double epsilon = 1e-9;
 
template<typename T>
void inputVector(vector<T>& v, int n) {
    for(int i=0; i<n; i++) {
        T temp;
        cin >> temp;
        v.push_back(temp%MOD);
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
dont give up, you can pull it back :)
 
*/
// kadane's algo
ll maxSubArraySum(vector<ll> a, int size)
{
    ll max_so_far = LONG_LONG_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
void solve() {
    //solve here
    ll n,k;
    cin>>n>>k;
    vector<ll> a;
    inputVector<ll> (a, n);
    ll ms = maxSubArraySum(a, n);
    ll sum =0;
    for(int i=0;i<n;i++){
        sum+= a[i];

    }
    ll remaining = (sum%MOD - ms%MOD)%MOD;
    if(ms< 0){
        if(sum == 0){
            cout<< 0<< '\n';
            return;
        }
        sum%= MOD;
        sum+= MOD;
        sum%= MOD;
        cout<< sum<< '\n';
        return ;
    }else{
        for(ll i=0;i<k;i++){
            ms*=2;
            ms%= MOD;
        }
    }

    ll ans = (ms%MOD+ remaining%MOD)%MOD;
    if(ans< 0){
        ans+= MOD;
        ans%= MOD;
    }
    cout<< ans<< '\n';


    

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

