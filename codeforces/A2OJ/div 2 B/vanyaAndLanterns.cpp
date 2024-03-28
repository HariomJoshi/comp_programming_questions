#include <bits/stdc++.h>

using namespace std;
 
#define ll long long
#define debug(x) cout << #x << " is " << x << '\n';
#define all(v) v.begin(),v.end()
#define print_precise(ans, n) cout<<fixed<< setprecision(n)<< ans <<'\n'

 
const int MOD = 1e9+7;
const int MAX = 2e5+5;
const double epsilon = 1e-8;

// templates
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
    int n,l;
    cin>>n>>l;
    vector<double> a;
    inputVector<double> (a, n);
    sort(a.begin(), a.end());
    double ans = 2*max(a[0], l-a[n-1]);
    // cout<< ans<< endl;
    for(int i=1;i<n;i++){
        ans = max(ans, a[i] -a[i-1]);
    }

    print_precise(ans/2, 10);
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

