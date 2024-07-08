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
// int memo[101][101];
// int lcs(string &a, string &b, int i, int j){
//     if(i<0 || j<0){
//         return 0;
//     }
//     if(memo[i][j] != -1) return memo[i][j];
//     int first = 0, second =0;
//     if(a[i] == b[j]){
//         first = 1+ lcs(a, b, i-1, j-1);
//     }else{
//         first = lcs(a, b, i-1, j);
//         second = lcs(a, b, i, j-1);
//     }
//     return memo[i][j]= max(first, second);
// }

void solve() {
    string a,b;
    cin>>a>>b;
    // memset(memo, -1, sizeof(memo));
    // int lcs_len = lcs(a,b, a.size()-1, b.size()-1);
    // // a ->substr
    // // b ->subseq
    // int size = a.size();
    int n =a.size(), m =b.size();
    int s_count = 0;
    for(int j =0; j<m ; j++){
        int count =0;
        int k = j, i =0;
        while(i< n &&  k< m){
            if(a[i] == b[k]){
                count++;
                i++;
                k++;
            }else{
                i++;
            }
        }
        s_count = max(s_count , count);
    }
    cout<< a.size() + b.size() -s_count<< '\n';

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