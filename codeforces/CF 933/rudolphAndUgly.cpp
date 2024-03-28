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

vector<int> z_function(string &s){
    int n = s.size();
    vector<int> arr(n, 0);
    arr[0] = 0;
    for(int i=1;i<n;i++){
        int temp = i;
        while(s[i] != s[arr[temp-1]] && arr[temp-1] !=0){
            temp = arr[temp-1];
        }
        // now temp is either at the first index or at the matching index
        // because these are the only two conditions of breaking the loop
        if(s[i]== s[arr[temp-1]]){
            arr[i] = arr[temp-1]+1;
        }else{
            arr[i] = 0;
        }
    }
    return arr;
}
 
void solve() {
    //solve here
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count  =0;
    string str1= "map";
    str1+= '#';
    str1+= str;
    string str2 = "pie";
    str2+= '#';
    str2+=str;
    vector<int> lps = z_function(str1);
    for(int i=0;i<lps.size();i++){
        if(lps[i] == 3) count++;
    }

    lps.clear();
    lps= z_function(str2);
    for(int i=0;i<lps.size();i++){
        if(lps[i] == 3) count++;
    }
    string str3 = "mapie";
    str3+="#";
    str3+=str;
    lps.clear();
    lps = z_function(str3);

    for(int i=0;i<lps.size(); i++){
        if(lps[i] == 5) count--;
    }
    cout<< count<< '\n';

    

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