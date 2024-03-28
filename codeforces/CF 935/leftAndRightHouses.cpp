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
    int n;
    cin>>n;
    string a;
    cin>>a;
    int right = 0;
    vector<int> ans;
    for(int i=0;i<n;i++) if(a[i] == '1')right++;
    if(right >= ceil((float)n/2)){
        ans.push_back(0);
    }
    int left  = 0;
    for(int i=0;i<n;i++){
        // make sure to print i+1 here
        if(a[i] == '0'){
            left+= 1;
        }else{
            right -=1;
        }
        if(left >= ceil((float)(i+1)/2) && right >= ceil((float)(n-i-1)/2)){
            ans.push_back(i+1);
        }
    }
    // debugVector<int> (ans);
    float diff = INT_MAX, idx = 0;
    for(int i=0;i<ans.size();i++){
        float fac = (float)n/2 - (float)ans[i];
        if(fac < 0) fac = -fac;
        if(fac< diff){
            diff = fac;
            idx = i;
        }
    }
    cout<< ans[idx]<< endl;

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