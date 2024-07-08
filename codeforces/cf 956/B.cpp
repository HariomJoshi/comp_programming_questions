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
    int n, m;
    cin>>n>>m;
    vector<string> sa, sb;
    inputVector<string> (sa, n);
    inputVector<string> (sb, n);
    vector<vector<int>> a(n, vector<int> (m, 0)), b(n, vector<int> (m, 0));
    for(int i=0;i<n;i++){
        for(int j =0; j<m; j++){
            a[i][j] = sa[i][j]-'0';
            // cout<< a[i][j]<< " ";
        }
        // cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j =0; j<m; j++){
            b[i][j] = sb[i][j]-'0';
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0; j<m-1; j++){
            // cout<<"B: "<<  a[i][j]<< " ";
            if(a[i][j] != b[i][j]){
                a[i][j]%=3;
                if(a[i][j] > b[i][j]){
                    if(a[i][j]-b[i][j] == 1){
                        a[i][j]+=2;
                        a[i+1][j+1]+=2;
                        a[i+1][j]++;
                        a[i][j+1]++;
                    }else{
                        a[i][j]++;
                        a[i+1][j+1]++;
                        a[i+1][j]+=2;
                        a[i][j+1]+=2;
                    }
                }else{
                    if(b[i][j]-a[i][j] == 1){
                        a[i][j]++;
                        a[i+1][j+1]++;
                        a[i+1][j]+=2;
                        a[i][j+1]+=2;
                    }else{
                        a[i][j]+=2;
                        a[i+1][j+1]+=2;
                        a[i+1][j]++;
                        a[i][j+1]++;
                    }
                }
                a[i][j]%=3;
                a[i+1][j+1]%=3;
                a[i+1][j]%=3;
                a[i][j+1]%=3;
            }
            // cout<<"A: "<<  a[i][j]<< " ";

        }
        // cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<m; j++){
            a[i][j]%=3;
            // cout<< a[i][j]<< " ";
            if(a[i][j] != b[i][j]){
                no;
                return;
            }
        }
        // cout<<endl;
    }
    yes;

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