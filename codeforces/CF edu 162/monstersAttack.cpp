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
 
void solve() {
    //solve here
    ll n, k;
    cin>>n>>k;
    vector<ll> a, x;
    inputVector<ll> (a,n);
    inputVector<ll> (x,n);
    ll l = -1, r =-1;
    for(ll i =0;i<n;i++){
        if(x[i]< 0) l = i;
        if(x[i]>0){
            r = i;
            break;
        }
    }
    ll m = max(x[n-1], -x[0]);
    ll bullets = 0;
    for(ll i=1;i<=m;i++){
        bullets +=k;
        if(x[l] == -i && x[r] == i){
            bullets -= (a[l] + a[r]);
            l--;
            r++;
        }else if(x[r] == i){
            bullets -= a[r];
            r++;
        }else if(x[l] == -i){
            bullets -= a[l];
            l--;
        }

        if(bullets <0){
            cout<< "NO"<< '\n';
            return;
        }
    }
    cout<< "YES"<< '\n';



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