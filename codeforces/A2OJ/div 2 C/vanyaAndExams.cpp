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

bool comp(pair<ll, ll> &p1, pair<ll, ll> &p2){
    return p1.second < p2.second;
}
 
void solve() {
    //solve here
    ll n, r, avg;
    cin>>n>>r>>avg;
    vector<pair<ll, ll>> a;
    for(int i=0;i<n;i++){
        ll p,q;
        cin>>p>>q;
        a.push_back({p,q});
    }

    sort(a.begin(), a.end(), comp);
    ll sum  = 0;
    for(auto &it: a) sum+= it.first;
    ll marks_needed = avg*n - sum;
    if(marks_needed<=0){
        cout<< 0<< '\n';
        return;
    }
    ll ans = 0;
    for(auto &it: a){
        if(it.first < r){
            if(marks_needed > r-it.first){
                marks_needed -= r-it.first;
                ans+= (r-it.first)*it.second;
            }else{
                ans+= marks_needed*it.second;
                marks_needed = 0;
            }
        }
        if(marks_needed == 0) break;
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
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

