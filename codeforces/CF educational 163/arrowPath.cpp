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

void next(char &a, int &pos){
    if( a == '<'){
        pos--;
    }else{
        pos++;
    }
}
 
void solve() {
    //solve here
    int n;
    cin>>n;
    vector<string> vect(2, "");
    for(int i=0;i<2;i++){
        cin>> vect[i];
        
    }
    int pos = 0, curr = 0, another = 1;
    while(pos< n){
        char a = vect[curr][pos+1];
        char b = vect[another][pos];
        if(a  == '>' && b == '>'){
            pos++;
            next(a, pos);
        }else if(a == '<' && b == '>'){
            swap(curr, another);
            next(b, pos);
        }else if( a == '>' && b == '<'){
            pos++;
            next(a, pos);
        }else{
            cout<< "NO"<< '\n';
            return;
        }
        if((pos >= n-2 && curr ==1) || (pos == n-1 && curr == 0)){
            cout<<"YES"<< '\n';
            return;
        }
    }
    cout<< "NO"<< '\n';

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