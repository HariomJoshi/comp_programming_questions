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
    int n, m;
    cin>>n>>m;
    vector<vector<int>> h(n, vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>> h[i][j];
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j =0; j<m;j++){
            int bl = INT_MAX, b= h[i+1][j], br = INT_MAX;
            if(j-1>=0) bl = h[i+1][j-1];
            if(j+1<m) br = h[i+1][j+1];
            if(bl < h[i][j] || b< h[i][j] || br< h[i][j]){
                cout<< "NO"<< '\n';
                return;
            }


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
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}