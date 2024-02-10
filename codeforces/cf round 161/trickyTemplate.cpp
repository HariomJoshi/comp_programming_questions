#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        string a, b, c;
        cin>>a>> b>>c;
        string temp = "";
        bool possible = false;
        for(int i =0;i<n;i++){
            if(a[i] != b[i] && (a[i] !=c[i] && b[i] !=c[i])) possible = true;
            if(a[i] == b[i] && a[i] != c[i]) possible = true;
            
        }
        if(possible) cout<< "YES"<< '\n';
        else cout<< "NO"<< '\n';
    }
    return 0;
}