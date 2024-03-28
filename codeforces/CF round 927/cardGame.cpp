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
    int n;
    cin>>n;
    char t;
    cin>>t;
    vector<string> c, d, h, s;
    for(int i=0;i<2*n;i++){
        string temp;
        cin>>temp;
        if(temp[1]=='C')c.push_back(temp);
        else if(temp[1]=='D')d.push_back(temp);
        else if(temp[1]=='H')h.push_back(temp);
        else s.push_back(temp);
        
    }
    vector<string> ans;
    if(t == 'C'){
        int e = 0, sz = c.size(), st= 0;

        // d
        if(d.size()%2==1){
            ans.push_back(d[st]);
            ans.push_back(c[e]);
            st++;
            e++;
        }
        for(int i=st;i<d.size();i+=2){
            ans.push_back(d[i]);
            ans.push_back(d[i+1]);
        }
        if(e>=sz&&( h.size() != 0 || s.size() != 0)){
            cout<< "IMPOSSIBLE"<< '\n';
            return;
        }
        st=0;

        // h
        if(h.size()%2==1){
            ans.push_back(h[st]);
            ans.push_back(c[e]);
            st++;
            e++;
        }
        for(int i=st;i<h.size();i+=2){
            ans.push_back(h[i]);
            ans.push_back(h[i+1]);
        }
        if(e>=sz && s.size()!=0){
            cout<< "IMPOSSIBLE"<< '\n';
            return;
        }
        st=0;
        // s
        if(s.size()%2==1){
            ans.push_back(s[st]);
            ans.push_back(c[e]);
            st++;
            e++;
        }
        for(int i=st;i<s.size();i+=2){
            ans.push_back(s[i]);
            ans.push_back(s[i+1]);
        }
        if((sz-e)%2 == 1){
            cout<< "IMPOSSIBLE"<< '\n';
            return;
        }

        for(int i=e;i<sz;i+=2){
            ans.push_back(c[i]);
            ans.push_back(c[i+1]);
        }
    }

    // write others as well
    printVector<string> (ans);
    

    


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