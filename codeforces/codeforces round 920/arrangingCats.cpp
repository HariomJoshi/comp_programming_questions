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
        cin>>n;
        string s, f;
        cin>>s;
        cin>>f;
        int zc =0, oc =0;
        for(int i=0;i<n;i++){
            if(s[i] == '0' && f[i] =='1') zc++;
            else if(s[i] == '1' && f[i] =='0') oc++;
        }
        cout<< max(zc, oc)<< '\n';
    }
    return 0;
}