#include <bits/stdc++.h>
// policy based data structures
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;  // namespace for policy based data structures
 
#define ll long long
#define debug(x) cout << #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
#define print_precise(ans, n) cout<<fixed<< setprecision(n)<< ans <<'\n'

// -------------------------------CONSTANTS-----------------------------------
const int MOD = 1e9+7;
const int MAX = 2e5+5;
const double epsilon = 1e-9;
// -------------------------------TEMPLATES ------------------------------------
 
// for using ordered set
template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// less is comparator ->ascending order
// less_equal -> for ordered multiset (if you want to store duplicate elements as well)
// two external functions then set
// 1. order_of_key(k): number of items smaller than k
// 2. find_by_order(k): k-th element of the set (counting from 0)
// both the above functions are in log(n) time
// NOTE: please don't use custom comparator in oset. instead, make and extra unordered_map and do the operations with it

template<class T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



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

// -------------------------------SOLUTION ---------------------------------


void solve() {
    //solve here
    int a, b;
    cin>>a>>b;
    if(a== b){
        cout<< 4<< '\n';
    }else if( a> b){
        if(a-b>=10){
            cout<< 0<< '\n';
            return;
        }
        int needed = 10-(a-b);
        cout<< ceil((float)needed/3)<< '\n';
    }else{
        int needed = 10+ b-a;
        cout<< ceil((float)needed/3)<< '\n';
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
    return 0;
}

