#include <bits/stdc++.h>
// policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define debug(x) cout << #x << " is " << x << endl;
#define print_precise(ans, n) cout<<fixed<< setprecision(n)<< ans <<'\n'
#define yes cout<< "YES"<< '\n'
#define no cout<< "NO"<< '\n'
#define alice cout<< "Alice"<< '\n'
#define bob cout<< "Bob"<< '\n'
const int MOD = 1e9+7;
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
    int n;
    cin>>n;
    vector<ll> a;
    inputVector<ll> (a, n);
    vector<ll> b;
    for(int i=1;i<n;i++){
        b.push_back(__gcd(a[i], a[i-1]));
    }
    
    int count =0, idx = 0;
    for(int i=1;i<b.size();i++){
        if(b[i-1] > b[i]){
            count++;
            idx = i-1;
        } 
    }
    if(count >1){
        no;
        return;
    }else if(count == 0){
        yes; 
        return;
    }
    if(__gcd(a[idx], a[idx+2]) <= b[idx+1]){
        yes;
    }else if(idx-1 >=0 && __gcd(a[idx-1], a[idx+1])<= b[idx+1]){
        yes;
    }else{
        no;
    }




}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("D:/CP/IO/input.txt","r",stdin);
    freopen("D:/CP/IO/output.txt","w",stdout);
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