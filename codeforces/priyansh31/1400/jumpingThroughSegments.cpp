#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define debug(x) cout << #x << " is " << x << endl;
#define all(v) v.begin(),v.end()
#define print_precise(ans, n) cout<<fixed<< setprecision(n)<< ans <<'\n'
 
const int MOD = 1e9+7;
const int MAX = 2e5+5;
const double epsilon = 1e-9;
 
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
bool intersects(vector<int> &a, vector<int> &b){
    if(b[1]< a[0]|| a[1]< b[0]) return false;
    return true;
}



bool isValid(vector<vector<ll>> vect, ll l){
    if(vect[0][1]< -l || vect[0][0]> l) return false;
    vect[0][0] = max(vect[0][0], -l) -l;
    vect[0][1] = min(vect[0][1], l)+l;
    for(int i=1;i<vect.size();i++){
        if(vect[i][1]< vect[i-1][0] || vect[i][0]> vect[i-1][1]){
            // does not intersect
            return false;
        }
        vect[i][0] = max(vect[i][0], vect[i-1][0])-l;
        vect[i][1] = min(vect[i][1], vect[i-1][1])+l;
    }
    return true;
}

 
void solve() {
    //solve here
    int n;
    cin>>n;
    vector<vector<ll>> seg;
    for(int i=0;i<n;i++){
        vector<ll> temp(2, 0);
        cin>>temp[0]>> temp[1];
        seg.push_back(temp);
    }
    ll s= 0 , e = 1e9, ans = 0;
    while(s<=e){
        int m = s+ (e-s)/2;
        // cout<< m<< '\n';
        if(isValid(seg, m)){
            // cout<< "valid: "<< m<< '\n';
            ans = m;
            e = m-1;
        }else{
            s = m+1;
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
    cin >> t;
    while(t--) {
        // cout<< t<< '\n';
        solve();
    }
    return 0;
}

