#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>> n;
        string s;
        cin>>s;
        int dCount = 0, ans = 0;
        for(int j =0;j<n;j++){
            if(s[j]=='.'){
                dCount++;
                ans++;
            }else{
                dCount =0;
            }
            if(dCount >=3){
                ans = 2;
                break;
            }
        }
        cout<< ans<< '\n';
    }
    return 0;
}