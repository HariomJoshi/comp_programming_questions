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
bool isSorted(vector<int> &fin, int l, vector<int> &next){
    for(int i=1;i<fin.size();i++){
        if(fin[i] < fin[i-1]){
            return false;
        }
    }
    for(int i=l+2; i<next.size(); i++){
        if(next[i] < next[i-1]){
            return false;
        }
    }
    if(fin[fin.size()-1] > next[l+1]) return false;
    return true;
}
 
void solve() {
    //solve here
    int n;
    cin>>n;
    vector<int> a;
    inputVector<int> (a,n);
    if(n == 1){
        cout<< "YES"<< '\n';
        return;
    }
    bool found = true;
    vector<int> fin;
    for(int i=1;i<n;i++){
        if(a[i-1]> a[i]){  // unsorted
            found = false;
        }
    }
    if(found){
        cout<< "YES"<< '\n';
        return;
    }

    found = false;
    for(int i=0;i<n;i++){
        if(a[i]< 10){
            fin.push_back(a[i]);
        }else{
            fin.push_back(a[i]/10);
            fin.push_back(a[i]%10);
        }
        if(isSorted(fin, i, a)){
            found = true;
            break;
        }
    }
    
    // debugVector<int> (fin);

    if(found) cout<< "YES"<< '\n';
    else cout<< "NO"<< '\n';
    

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