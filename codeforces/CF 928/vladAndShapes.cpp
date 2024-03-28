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
    int n;
    cin>>n;
    vector<string> vect(n, "");
    for(int i =0;i<n;i++){
        cin>> vect[i];
    }
    for(int i=0;i<n;i++){
        for(int j =0; j<n-1;j++){
            if(vect[i][j] == '1'){
                char a = vect[i][j+1];
                char b = vect[i+1][j];
                char c = vect[i+1][j+1];
                if(a == '1' && b == '1' && c=='1'){
                    cout<< "SQUARE"<< '\n';
                    
                } 
                // else if((a == '1' && b == '0' && c=='1')|| (a == '0' && b == '1' && c=='1')){
                //     cout<< "TRIANGLE"<< '\n'; 
                    
                // }
                else cout<< "TRIANGLE"<< '\n';
                return; 
            }
        }
    }
    cout<< "SQUARE"<< '\n';



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