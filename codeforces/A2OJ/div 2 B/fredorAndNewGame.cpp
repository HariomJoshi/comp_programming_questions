#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
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

int bitCount(ll a){
    int count =0;
    while(a>0){
        if(a%2== 1)count++;
        a/=2;
    }
    return count;
}
 
void solve() {
    //solve here
    int n, m, k;
    cin>>n>>m>>k;
    vector<ll> x(m+1, 0);
    // 0 to m
    for(int i=0;i<=m;i++){
        cin>>x[i];
    }
    int ans =0;
    for(int i=0;i<m;i++){
        if(bitCount(x[i]^x[m])<=k){
            ans++;
        }
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

