#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for(int i =0; i<T; i++){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        bool zero = false, one = false, both = false;
        for(int j =0;j<n-1; j++){
            if(s[j] == s[j+1]){
                if(s[j] == '1'){
                    if(zero) both = true;
                    else one = true;
                }else{
                    if(one) both = true;
                    else zero = true;
                }  
            }
        }
        if(!zero && !one && !both){
            cout<< "YES" << '\n';
            continue;
        }
        if(both){
            cout<< "NO" <<'\n';
            continue;
        }
        bool no = false;
        for(int j =0; j<m-1; j++){
            if(t[j] == t[j+1]){
                no = true;
                break;
            }
        }
        if(no || m%2 ==0) cout<< "NO"<< '\n';


        else if(t[0] == '1' && zero || t[0] == '0' && one) cout<< "YES"<< '\n';
        else cout<< "NO"<< '\n';


    }
    return 0;
}