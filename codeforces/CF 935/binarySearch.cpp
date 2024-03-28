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

/*
 
THINK
gcd 
xor
binary search
simple math
dp
dont give up, you can pull it back :)
 
*/
 
void solve() {
    //solve here
    ll n, x;
    cin>>n>>x;
    vector<int> p;
    p.push_back(0);
    inputVector<int> (p, n);
    int idx = 1;
    for(int i=1;i<=n;i++){
        if(p[i] == x){
            idx = i; 
            break;
        }
    }


    ll l = 1, r = n+1;
    while(l+1<r){
        ll m = (l +r)/2;
        if(p[m]<=x){
            l = m;
        }else{
            r = m;
        }
    }
 
   // we just need to find what is l from this alogrithm
    // now swap l and pos[x]
    if(l == idx) cout<< 0<< '\n';
    else{
        cout<< 1<< '\n';
        cout<< idx<< " "<< l<< '\n';
    }
    
    
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
    #ifdef ONLINE_JUDGE
    #endif
    return 0;
}

