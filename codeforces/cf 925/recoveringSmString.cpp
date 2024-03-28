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
        string ans = "";
        if(n<=27){
            ans+="aa";
            ans+=(n-3+'a');
        }else if(n>27 && n<=53){
            ans+='a';
            ans+=(n-28 +'a');
            ans+='z';
        }else if(n>53 && n<78){
            ans+= ((n%26-1)+'a');
            ans+="zz";
        }else{
            ans= "zzz";
        }
        cout<< ans<<'\n';
    }
    return 0;
}