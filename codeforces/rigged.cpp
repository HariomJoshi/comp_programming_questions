#include <bits/stdc++.h>
using namespace std;

int main(){ 
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        int s[n], e[n];
        for(int j=0;j<n;j++){
            cin>>s[j]>> e[j];
        }
        // input ready
        bool found = true;
        for(int j =1;j<n;j++){
            if(s[j]>=s[0] && e[j]>=e[0]){
                found = false;
            }
        }
        if(!found) cout<<"-1"<<'\n';
        else cout<< s[0]<< '\n';
        
    }
    return 0;
}