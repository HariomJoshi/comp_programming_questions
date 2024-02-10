#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        string s;
        cin>>s;
        int n = s.size(), oCount =0, zCount =0;
        for(int j=0;j<n;j++){
            if(s[j]=='0') zCount++;
            else oCount++;
        }
        int ans = 0;
        for(int j=0;j<n;j++){
            if(s[j]=='0') oCount--;
            else zCount--;
            if(oCount<0 || zCount<0){
                ans = n-j;
                break;
            }
            
        }
        cout<< ans<< '\n';
        
    }
    return 0;
}