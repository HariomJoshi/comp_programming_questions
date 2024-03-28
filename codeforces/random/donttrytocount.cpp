#include <bits/stdc++.h>
using namespace std;
bool isSubstring(string sub, string parent, int subsize, int parentsize){
    for(int i =0;i<=parentsize-subsize;i++){    
        int j =i;
        int k = 0;
        while(j< i+subsize && k<subsize && parent[j] == sub[k]){
            j++;
            k++;
        }
        if(k == subsize) return true;
        
    }
    return false;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        bool sub = false;
        for(int j=0;j<=5;j++){
            if(sub) continue;
            if(isSubstring(s, x, m, n)){
                cout<< j<< endl;
                sub = true;
            }
            x+=x;
            n+=n;
        }
        if(!sub) cout<< -1<< endl;
    }
    return 0;
}