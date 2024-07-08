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
#define in cout<< "Inside"<< '\n'
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
ll n, total;
bool allVis(vector<int> &vis){
    for(int i=0;i<3;i++){
        if(!vis[i])return false;
    }
    return true;
}

void func(vector<vector<ll>> &pref, int k, vector<int> &vis, vector<int> &indices, vector<int> &finalv){
    int previ = (indices.size() == 0)? -1: indices[indices.size()-1];
    for(int i=previ+1;i<n;i++){
        int sum = (previ == -1)? pref[k][i]: pref[k][i] - pref[k][previ];
        if(pref[k][i] >= total){
            indices[k] =i;
            vis[k] = true;
            if(allVis(vis)){
                finalv = indices;
                return;
            }
            for(int i=0;i<3;i++){
                if(!vis[i]){
                    func(pref, i, vis, indices, finalv);
                }
            }
            indices[k] = -1;
            vis[k] = false;
        }
    }
}


void solve() {
    cin>>n;
    vector<ll> a, b, c;
    inputVector<ll> (a, n);
    inputVector<ll> (b, n);
    inputVector<ll> (c, n);
    total = accumulate(a.begin(), a.end(), 0LL);
    total = (total%3==0)? total/3: total/3+1;
    vector<vector<ll>> pref(3, vector<ll> (n, 0));
    pref[0][0] = a[0];
    pref[1][0] = b[0];
    pref[2][0] = c[0];
    vector<pair<int, int>> ans(3, pair<int, int> ({-2,-2}));
    for(int i=1;i<n;i++){
        pref[0][i] = a[i] + pref[0][i-1];
        pref[1][i] = b[i] + pref[1][i-1];
        pref[2][i] = c[i] + pref[2][i-1];
    } 
    vector<int> vis(3, false);
    vector<int> finalv;
    for(int i=0;i<3;i++){
        vector<int> indices(3,-1);
        func(pref, i, vis, indices, finalv);
        if(finalv.size() == 3)break;
    }
    printVector<int> (finalv);

    


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